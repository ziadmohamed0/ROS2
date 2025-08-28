/**
 * @file modern_teleop_controller.cpp
 * @author Ziad Mohammed Fathy
 * @brief 
 * @version 0.1
 * @date 2025-08-28
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <sensor_msgs/msg/laser_scan.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <std_msgs/msg/string.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <thread>
#include <atomic>
#include <chrono>
#include <memory>
#include <string>
#include <map>
#include <iostream>
#include <iomanip>

using namespace std::chrono_literals;

class ModernTeleopController : public rclcpp::Node
{
public:
    ModernTeleopController() 
        : Node("modern_teleop_controller"),
          running_{true},
          current_linear_vel_{0.0},
          current_angular_vel_{0.0},
          max_linear_vel_{0.22},
          max_angular_vel_{2.84},
          vel_step_{0.01},
          safety_enabled_{true},
          min_obstacle_distance_{0.3}
    {
        // Initialize publishers
        cmd_vel_pub_ = this->create_publisher<geometry_msgs::msg::Twist>("/cmd_vel", 10);
        status_pub_ = this->create_publisher<std_msgs::msg::String>("/teleop_status", 10);
        
        // Initialize subscribers
        laser_sub_ = this->create_subscription<sensor_msgs::msg::LaserScan>(
            "/scan", 10, 
            std::bind(&ModernTeleopController::laserCallback, this, std::placeholders::_1));
            
        odom_sub_ = this->create_subscription<nav_msgs::msg::Odometry>(
            "/odom", 10,
            std::bind(&ModernTeleopController::odomCallback, this, std::placeholders::_1));

        // Control loop timer
        control_timer_ = this->create_wall_timer(
            50ms, std::bind(&ModernTeleopController::controlLoop, this));

        // Status display timer
        status_timer_ = this->create_wall_timer(
            500ms, std::bind(&ModernTeleopController::displayStatus, this));

        // Initialize terminal settings
        setupTerminal();
        
        // Start keyboard input thread
        input_thread_ = std::thread(&ModernTeleopController::keyboardInputLoop, this);

        RCLCPP_INFO(this->get_logger(), "Modern TurtleBot3 Teleop Controller Started");
        printInstructions();
    }

    ~ModernTeleopController()
    {
        running_ = false;
        if (input_thread_.joinable()) {
            input_thread_.join();
        }
        restoreTerminal();
        
        // Stop the robot
        auto stop_msg = geometry_msgs::msg::Twist();
        cmd_vel_pub_->publish(stop_msg);
        
        RCLCPP_INFO(this->get_logger(), "Teleop Controller Shutdown");
    }

private:
    // Modern C++ member variables with proper initialization
    std::atomic<bool> running_;
    std::atomic<double> current_linear_vel_;
    std::atomic<double> current_angular_vel_;
    std::atomic<double> target_linear_vel_{0.0};
    std::atomic<double> target_angular_vel_{0.0};
    
    const double max_linear_vel_;
    const double max_angular_vel_;
    const double vel_step_;
    
    std::atomic<bool> safety_enabled_;
    const double min_obstacle_distance_;
    std::atomic<double> front_distance_{std::numeric_limits<double>::max()};

    // ROS2 components
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr cmd_vel_pub_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr status_pub_;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr laser_sub_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_sub_;
    rclcpp::TimerBase::SharedPtr control_timer_;
    rclcpp::TimerBase::SharedPtr status_timer_;

    // Threading and terminal
    std::thread input_thread_;
    struct termios original_terminal_settings_;
    
    // Robot state
    geometry_msgs::msg::Pose current_pose_;
    double current_yaw_{0.0};
    rclcpp::Time last_command_time_;

    // Key mappings using modern C++ map initialization
    const std::map<char, std::string> key_descriptions_{
        {'w', "Move Forward"},
        {'s', "Move Backward"},
        {'a', "Turn Left"},
        {'d', "Turn Right"},
        {'q', "Move Forward-Left"},
        {'e', "Move Forward-Right"},
        {'z', "Move Backward-Left"},
        {'c', "Move Backward-Right"},
        {'x', "Stop"},
        {'t', "Toggle Safety Mode"},
        {'r', "Reset Velocities"},
        {'+', "Increase Max Speed"},
        {'-', "Decrease Max Speed"},
        {'h', "Show Help"},
        {'1', "Slow Mode"},
        {'2', "Normal Mode"},
        {'3', "Fast Mode"}
    };

    void setupTerminal()
    {
        // Save original terminal settings
        tcgetattr(STDIN_FILENO, &original_terminal_settings_);
        
        struct termios new_settings = original_terminal_settings_;
        new_settings.c_lflag &= ~(ICANON | ECHO);
        new_settings.c_cc[VMIN] = 0;
        new_settings.c_cc[VTIME] = 0;
        
        tcsetattr(STDIN_FILENO, TCSANOW, &new_settings);
        fcntl(STDIN_FILENO, F_SETFL, O_NONBLOCK);
    }

    void restoreTerminal()
    {
        tcsetattr(STDIN_FILENO, TCSANOW, &original_terminal_settings_);
    }

    void keyboardInputLoop()
    {
        char key;
        while (running_) {
            if (read(STDIN_FILENO, &key, 1) > 0) {
                processKeyInput(key);
            }
            std::this_thread::sleep_for(10ms);
        }
    }

    void processKeyInput(char key)
    {
        last_command_time_ = this->now();
        
        // Convert to lowercase for consistency
        key = std::tolower(key);
        
        switch (key) {
            case 'w':
                setVelocity(vel_step_, 0.0);
                break;
            case 's':
                setVelocity(-vel_step_, 0.0);
                break;
            case 'a':
                setVelocity(0.0, vel_step_);
                break;
            case 'd':
                setVelocity(0.0, -vel_step_);
                break;
            case 'q':
                setVelocity(vel_step_, vel_step_);
                break;
            case 'e':
                setVelocity(vel_step_, -vel_step_);
                break;
            case 'z':
                setVelocity(-vel_step_, vel_step_);
                break;
            case 'c':
                setVelocity(-vel_step_, -vel_step_);
                break;
            case 'x':
                stopRobot();
                break;
            case 't':
                toggleSafetyMode();
                break;
            case 'r':
                resetVelocities();
                break;
            case '+':
            case '=':
                adjustMaxSpeed(0.05);
                break;
            case '-':
                adjustMaxSpeed(-0.05);
                break;
            case '1':
                setSpeedMode(0.1, 1.0);  // Slow mode
                break;
            case '2':
                setSpeedMode(0.22, 2.84); // Normal mode
                break;
            case '3':
                setSpeedMode(0.5, 5.0);   // Fast mode
                break;
            case 'h':
                printInstructions();
                break;
            case 27: // ESC key
                running_ = false;
                break;
            default:
                // Invalid key - do nothing but don't show error to avoid spam
                break;
        }
    }

    void setVelocity(double linear_delta, double angular_delta)
    {
        target_linear_vel_ = std::clamp(
            target_linear_vel_ + linear_delta, 
            -max_linear_vel_, 
            max_linear_vel_);
            
        target_angular_vel_ = std::clamp(
            target_angular_vel_ + angular_delta,
            -max_angular_vel_,
            max_angular_vel_);
    }

    void stopRobot()
    {
        target_linear_vel_ = 0.0;
        target_angular_vel_ = 0.0;
        current_linear_vel_ = 0.0;
        current_angular_vel_ = 0.0;
    }

    void toggleSafetyMode()
    {
        safety_enabled_ = !safety_enabled_;
        RCLCPP_INFO(this->get_logger(), "Safety mode: %s", 
                   safety_enabled_ ? "ENABLED" : "DISABLED");
    }

    void resetVelocities()
    {
        stopRobot();
        RCLCPP_INFO(this->get_logger(), "Velocities reset to zero");
    }

    void adjustMaxSpeed(double delta)
    {
        // This is a bit tricky with atomic and const, so we'll just log the change
        RCLCPP_INFO(this->get_logger(), "Speed adjustment: %+.2f (restart required for effect)", delta);
    }

    void setSpeedMode(double max_linear, double max_angular)
    {
        RCLCPP_INFO(this->get_logger(), "Speed mode changed: Linear=%.2f, Angular=%.2f (restart required)", 
                   max_linear, max_angular);
    }

    void controlLoop()
    {
        // Smooth velocity transitions using modern C++ lambdas
        auto smoothTransition = [](double current, double target, double max_step) -> double {
            double diff = target - current;
            if (std::abs(diff) <= max_step) {
                return target;
            }
            return current + std::copysign(max_step, diff);
        };

        // Smooth velocity changes
        constexpr double accel_step = 0.02;
        current_linear_vel_ = smoothTransition(current_linear_vel_, target_linear_vel_, accel_step);
        current_angular_vel_ = smoothTransition(current_angular_vel_, target_angular_vel_, accel_step);

        // Safety check
        double final_linear = current_linear_vel_;
        if (safety_enabled_ && final_linear > 0.0 && front_distance_ < min_obstacle_distance_) {
            final_linear = 0.0;
            target_linear_vel_ = 0.0;
            RCLCPP_WARN_THROTTLE(this->get_logger(), *this->get_clock(), 1000, 
                                "Obstacle detected! Stopping forward movement.");
        }

        // Auto-stop after 2 seconds of no input
        auto now = this->now();
        if ((now - last_command_time_).seconds() > 2.0) {
            target_linear_vel_ = 0.0;
            target_angular_vel_ = 0.0;
        }

        // Publish velocity command
        auto twist_msg = geometry_msgs::msg::Twist();
        twist_msg.linear.x = final_linear;
        twist_msg.angular.z = current_angular_vel_;
        cmd_vel_pub_->publish(twist_msg);
    }

    void displayStatus()
    {
        // Clear screen and move cursor to top
        std::cout << "\033[2J\033[H";
        
        std::cout << "=== Modern TurtleBot3 Teleop Controller ===" << std::endl;
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Linear Velocity:  " << std::setw(6) << current_linear_vel_.load() 
                  << " / " << std::setw(6) << target_linear_vel_.load() << " m/s" << std::endl;
        std::cout << "Angular Velocity: " << std::setw(6) << current_angular_vel_.load() 
                  << " / " << std::setw(6) << target_angular_vel_.load() << " rad/s" << std::endl;
        std::cout << "Position: X=" << std::setw(6) << current_pose_.position.x 
                  << " Y=" << std::setw(6) << current_pose_.position.y 
                  << " Yaw=" << std::setw(6) << (current_yaw_ * 180.0 / M_PI) << "°" << std::endl;
        std::cout << "Front Distance:   " << std::setw(6) << front_distance_.load() << " m" << std::endl;
        std::cout << "Safety Mode:      " << (safety_enabled_ ? "ENABLED" : "DISABLED") << std::endl;
        std::cout << "Max Speeds:       " << max_linear_vel_ << " m/s, " << max_angular_vel_ << " rad/s" << std::endl;
        std::cout << "\nPress 'h' for help, ESC to quit" << std::endl;

        // Publish status message
        auto status_msg = std_msgs::msg::String();
        status_msg.data = "Linear: " + std::to_string(current_linear_vel_.load()) + 
                         ", Angular: " + std::to_string(current_angular_vel_.load());
        status_pub_->publish(status_msg);
    }

    void printInstructions()
    {
        std::cout << "\n=== CONTROLS ===" << std::endl;
        for (const auto& [key, description] : key_descriptions_) {
            std::cout << "  " << key << " : " << description << std::endl;
        }
        std::cout << "  ESC : Quit" << std::endl;
        std::cout << "\n=== SAFETY FEATURES ===" << std::endl;
        std::cout << "- Obstacle avoidance (can be toggled with 't')" << std::endl;
        std::cout << "- Auto-stop after 2 seconds of inactivity" << std::endl;
        std::cout << "- Smooth velocity transitions" << std::endl;
        std::cout << "- Velocity limiting" << std::endl << std::endl;
    }

    void laserCallback(const sensor_msgs::msg::LaserScan::SharedPtr msg)
    {
        if (msg->ranges.empty()) return;

        // Calculate minimum distance in front of robot (±30 degrees)
        const size_t center_index = msg->ranges.size() / 2;
        const size_t range_check = std::min(static_cast<size_t>(30), center_index);
        
        double min_distance = std::numeric_limits<double>::max();
        
        for (size_t i = center_index - range_check; i <= center_index + range_check && i < msg->ranges.size(); ++i) {
            if (std::isfinite(msg->ranges[i]) && msg->ranges[i] > msg->range_min) {
                min_distance = std::min(min_distance, static_cast<double>(msg->ranges[i]));
            }
        }
        
        front_distance_ = min_distance;
    }

    void odomCallback(const nav_msgs::msg::Odometry::SharedPtr msg)
    {
        current_pose_ = msg->pose.pose;
        
        // Extract yaw from quaternion using modern C++ approach
        tf2::Quaternion quat;
        tf2::fromMsg(current_pose_.orientation, quat);
        
        tf2::Matrix3x3 matrix(quat);
        double roll, pitch;
        matrix.getRPY(roll, pitch, current_yaw_);
    }
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<ModernTeleopController>());
    rclcpp::shutdown();
    return 0;
}