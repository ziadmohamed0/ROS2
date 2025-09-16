// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp/logger.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

#include <parameter_traits/parameter_traits.hpp>

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>



namespace mecanum_drive_controller {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        std::string front_left_joint_name = "front_left_wheel_joint";
        std::string front_right_joint_name = "front_right_wheel_joint";
        std::string back_left_joint_name = "back_left_wheel_joint";
        std::string back_right_joint_name = "back_right_wheel_joint";
        double wheel_base = 0.16;
        double wheel_separation = 0.169;
        double wheel_radius = 0.0325;
        double wheel_separation_multiplier = 1.0;
        double front_left_wheel_radius_multiplier = 1.0;
        double front_right_wheel_radius_multiplier = 1.0;
        double back_left_wheel_radius_multiplier = 1.0;
        double back_right_wheel_radius_multiplier = 1.0;
        bool tf_frame_prefix_enable = false;
        std::string tf_frame_prefix = "";
        std::string odom_frame_id = "odom";
        std::string base_frame_id = "base_footprint";
        std::vector<double> pose_covariance_diagonal = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
        std::vector<double> twist_covariance_diagonal = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
        bool position_feedback = true;
        bool open_loop = true;
        bool enable_odom_tf = true;
        double cmd_vel_timeout = 0.5;
        bool publish_limited_velocity = false;
        int64_t velocity_rolling_window_size = 10;
        double publish_rate = 50.0;
        struct Linear {
            struct X {
                bool has_velocity_limits = false;
                bool has_acceleration_limits = false;
                bool has_jerk_limits = false;
                double max_velocity = 0.0;
                double min_velocity = 0.0;
                double max_acceleration = 0.0;
                double min_acceleration = 0.0;
                double max_jerk = 0.0;
                double min_jerk = 0.0;
            } x;
            struct Y {
                bool has_velocity_limits = false;
                bool has_acceleration_limits = false;
                bool has_jerk_limits = false;
                double max_velocity = 0.0;
                double min_velocity = 0.0;
                double max_acceleration = 0.0;
                double min_acceleration = 0.0;
                double max_jerk = 0.0;
                double min_jerk = 0.0;
            } y;
        } linear;
        struct Angular {
            struct Z {
                bool has_velocity_limits = false;
                bool has_acceleration_limits = false;
                bool has_jerk_limits = false;
                double max_velocity = 0.0;
                double min_velocity = 0.0;
                double max_acceleration = 0.0;
                double min_acceleration = 0.0;
                double max_jerk = 0.0;
                double min_jerk = 0.0;
            } z;
        } angular;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        double wheel_base = 0.16;
        double wheel_separation = 0.169;
        double wheel_radius = 0.0325;
        double wheel_separation_multiplier = 1.0;
        double front_left_wheel_radius_multiplier = 1.0;
        double front_right_wheel_radius_multiplier = 1.0;
        double back_left_wheel_radius_multiplier = 1.0;
        double back_right_wheel_radius_multiplier = 1.0;
        bool tf_frame_prefix_enable = false;
        bool position_feedback = true;
        bool open_loop = true;
        bool enable_odom_tf = true;
        double cmd_vel_timeout = 0.5;
        bool publish_limited_velocity = false;
        int64_t velocity_rolling_window_size = 10;
        double publish_rate = 50.0;
        struct Linear {
            struct X {
                bool has_velocity_limits = false;
                bool has_acceleration_limits = false;
                bool has_jerk_limits = false;
                double max_velocity = 0.0;
                double min_velocity = 0.0;
                double max_acceleration = 0.0;
                double min_acceleration = 0.0;
                double max_jerk = 0.0;
                double min_jerk = 0.0;
            } x;
            struct Y {
                bool has_velocity_limits = false;
                bool has_acceleration_limits = false;
                bool has_jerk_limits = false;
                double max_velocity = 0.0;
                double min_velocity = 0.0;
                double max_acceleration = 0.0;
                double min_acceleration = 0.0;
                double max_jerk = 0.0;
                double min_jerk = 0.0;
            } y;
        } linear;
        struct Angular {
            struct Z {
                bool has_velocity_limits = false;
                bool has_acceleration_limits = false;
                bool has_jerk_limits = false;
                double max_velocity = 0.0;
                double min_velocity = 0.0;
                double max_acceleration = 0.0;
                double min_acceleration = 0.0;
                double max_jerk = 0.0;
                double min_jerk = 0.0;
            } z;
        } angular;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    ParamListener(rclcpp::Node::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(rclcpp_lifecycle::LifecycleNode::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("mecanum_drive_controller"), prefix) {
      RCLCPP_DEBUG(logger_, "ParameterListener: Not using node logger, recommend using other constructors to use a node logger");
    }

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  rclcpp::Logger logger, std::string const& prefix = "")
    : prefix_{prefix},
      logger_{std::move(logger)} {
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    /**
     * @brief Tries to update the parsed Params object
     * @param params_in The Params object to update
     * @return true if the Params object was updated, false if it was already up to date or the mutex could not be locked
     * @note This function tries to lock the mutex without blocking, so it can be used in a RT loop
     */
    bool try_update_params(Params & params_in) const {
      std::unique_lock<std::mutex> lock(mutex_, std::try_to_lock);
      if (lock.owns_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
          return true;
        }
      }
      return false;
    }

    /**
     * @brief Tries to get the current Params object
     * @param params_in The Params object to fill with the current parameters
     * @return true if mutex can be locked, false if mutex could not be locked
     * @note The parameters are only filled, when the mutex can be locked and the params timestamp is different
     * @note This function tries to lock the mutex without blocking, so it can be used in a RT loop
     */
    bool try_get_params(Params & params_in) const {
      if (mutex_.try_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
        }
        mutex_.unlock();
        return true;
      }
      return false;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;
      output.wheel_base = params.wheel_base;
      output.wheel_separation = params.wheel_separation;
      output.wheel_radius = params.wheel_radius;
      output.wheel_separation_multiplier = params.wheel_separation_multiplier;
      output.front_left_wheel_radius_multiplier = params.front_left_wheel_radius_multiplier;
      output.front_right_wheel_radius_multiplier = params.front_right_wheel_radius_multiplier;
      output.back_left_wheel_radius_multiplier = params.back_left_wheel_radius_multiplier;
      output.back_right_wheel_radius_multiplier = params.back_right_wheel_radius_multiplier;
      output.tf_frame_prefix_enable = params.tf_frame_prefix_enable;
      output.position_feedback = params.position_feedback;
      output.open_loop = params.open_loop;
      output.enable_odom_tf = params.enable_odom_tf;
      output.cmd_vel_timeout = params.cmd_vel_timeout;
      output.publish_limited_velocity = params.publish_limited_velocity;
      output.velocity_rolling_window_size = params.velocity_rolling_window_size;
      output.publish_rate = params.publish_rate;
      output.linear.x.has_velocity_limits = params.linear.x.has_velocity_limits;
      output.linear.x.has_acceleration_limits = params.linear.x.has_acceleration_limits;
      output.linear.x.has_jerk_limits = params.linear.x.has_jerk_limits;
      output.linear.x.max_velocity = params.linear.x.max_velocity;
      output.linear.x.min_velocity = params.linear.x.min_velocity;
      output.linear.x.max_acceleration = params.linear.x.max_acceleration;
      output.linear.x.min_acceleration = params.linear.x.min_acceleration;
      output.linear.x.max_jerk = params.linear.x.max_jerk;
      output.linear.x.min_jerk = params.linear.x.min_jerk;
      output.linear.y.has_velocity_limits = params.linear.y.has_velocity_limits;
      output.linear.y.has_acceleration_limits = params.linear.y.has_acceleration_limits;
      output.linear.y.has_jerk_limits = params.linear.y.has_jerk_limits;
      output.linear.y.max_velocity = params.linear.y.max_velocity;
      output.linear.y.min_velocity = params.linear.y.min_velocity;
      output.linear.y.max_acceleration = params.linear.y.max_acceleration;
      output.linear.y.min_acceleration = params.linear.y.min_acceleration;
      output.linear.y.max_jerk = params.linear.y.max_jerk;
      output.linear.y.min_jerk = params.linear.y.min_jerk;
      output.angular.z.has_velocity_limits = params.angular.z.has_velocity_limits;
      output.angular.z.has_acceleration_limits = params.angular.z.has_acceleration_limits;
      output.angular.z.has_jerk_limits = params.angular.z.has_jerk_limits;
      output.angular.z.max_velocity = params.angular.z.max_velocity;
      output.angular.z.min_velocity = params.angular.z.min_velocity;
      output.angular.z.max_acceleration = params.angular.z.max_acceleration;
      output.angular.z.min_acceleration = params.angular.z.min_acceleration;
      output.angular.z.max_jerk = params.angular.z.max_jerk;
      output.angular.z.min_jerk = params.angular.z.min_jerk;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "front_left_joint_name")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.front_left_joint_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "front_right_joint_name")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.front_right_joint_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "back_left_joint_name")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.back_left_joint_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "back_right_joint_name")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.back_right_joint_name = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "wheel_base")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.wheel_base = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "wheel_separation")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.wheel_separation = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "wheel_radius")) {
            if(auto validation_result = gt<double>(param, 0.0);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.wheel_radius = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "wheel_separation_multiplier")) {
            updated_params.wheel_separation_multiplier = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "front_left_wheel_radius_multiplier")) {
            updated_params.front_left_wheel_radius_multiplier = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "front_right_wheel_radius_multiplier")) {
            updated_params.front_right_wheel_radius_multiplier = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "back_left_wheel_radius_multiplier")) {
            updated_params.back_left_wheel_radius_multiplier = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "back_right_wheel_radius_multiplier")) {
            updated_params.back_right_wheel_radius_multiplier = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "tf_frame_prefix_enable")) {
            updated_params.tf_frame_prefix_enable = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "tf_frame_prefix")) {
            updated_params.tf_frame_prefix = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "odom_frame_id")) {
            updated_params.odom_frame_id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "base_frame_id")) {
            updated_params.base_frame_id = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pose_covariance_diagonal")) {
            updated_params.pose_covariance_diagonal = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "twist_covariance_diagonal")) {
            updated_params.twist_covariance_diagonal = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "position_feedback")) {
            updated_params.position_feedback = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "open_loop")) {
            updated_params.open_loop = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "enable_odom_tf")) {
            updated_params.enable_odom_tf = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "cmd_vel_timeout")) {
            updated_params.cmd_vel_timeout = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "publish_limited_velocity")) {
            updated_params.publish_limited_velocity = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "velocity_rolling_window_size")) {
            updated_params.velocity_rolling_window_size = param.as_int();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "publish_rate")) {
            updated_params.publish_rate = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.has_velocity_limits")) {
            updated_params.linear.x.has_velocity_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.has_acceleration_limits")) {
            updated_params.linear.x.has_acceleration_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.has_jerk_limits")) {
            updated_params.linear.x.has_jerk_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.max_velocity")) {
            updated_params.linear.x.max_velocity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.min_velocity")) {
            updated_params.linear.x.min_velocity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.max_acceleration")) {
            updated_params.linear.x.max_acceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.min_acceleration")) {
            updated_params.linear.x.min_acceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.max_jerk")) {
            updated_params.linear.x.max_jerk = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.x.min_jerk")) {
            updated_params.linear.x.min_jerk = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.y.has_velocity_limits")) {
            updated_params.linear.y.has_velocity_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.y.has_acceleration_limits")) {
            updated_params.linear.y.has_acceleration_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.y.has_jerk_limits")) {
            updated_params.linear.y.has_jerk_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.y.max_velocity")) {
            updated_params.linear.y.max_velocity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.y.min_velocity")) {
            updated_params.linear.y.min_velocity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.y.max_acceleration")) {
            updated_params.linear.y.max_acceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.y.min_acceleration")) {
            updated_params.linear.y.min_acceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.y.max_jerk")) {
            updated_params.linear.y.max_jerk = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "linear.y.min_jerk")) {
            updated_params.linear.y.min_jerk = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.has_velocity_limits")) {
            updated_params.angular.z.has_velocity_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.has_acceleration_limits")) {
            updated_params.angular.z.has_acceleration_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.has_jerk_limits")) {
            updated_params.angular.z.has_jerk_limits = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.max_velocity")) {
            updated_params.angular.z.max_velocity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.min_velocity")) {
            updated_params.angular.z.min_velocity = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.max_acceleration")) {
            updated_params.angular.z.max_acceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.min_acceleration")) {
            updated_params.angular.z.min_acceleration = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.max_jerk")) {
            updated_params.angular.z.max_jerk = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "angular.z.min_jerk")) {
            updated_params.angular.z.min_jerk = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
      if (user_callback_) {
         user_callback_(updated_params);
      }
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "front_left_joint_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the joint that controls the front left wheel";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.front_left_joint_name);
          parameters_interface_->declare_parameter(prefix_ + "front_left_joint_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "front_right_joint_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the joint that controls the front right wheel";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.front_right_joint_name);
          parameters_interface_->declare_parameter(prefix_ + "front_right_joint_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "back_left_joint_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the joint that controls the back left wheel";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.back_left_joint_name);
          parameters_interface_->declare_parameter(prefix_ + "back_left_joint_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "back_right_joint_name")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the joint that controls the back right wheel";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.back_right_joint_name);
          parameters_interface_->declare_parameter(prefix_ + "back_right_joint_name", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "wheel_base")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Longitudinal distance between front and back wheels in meters. If this parameter is wrong, the robot will not move correctly.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.wheel_base);
          parameters_interface_->declare_parameter(prefix_ + "wheel_base", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "wheel_separation")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Lateral distance between left and right wheels in meters. If this parameter is wrong, the robot will not behave correctly in movements.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.wheel_separation);
          parameters_interface_->declare_parameter(prefix_ + "wheel_separation", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "wheel_radius")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Radius of the wheels in meters. If this parameter is wrong the robot will move faster or slower than expected.";
          descriptor.read_only = false;
          descriptor.floating_point_range.resize(1);
          descriptor.floating_point_range.at(0).from_value = 0.0;
          descriptor.floating_point_range.at(0).to_value = std::numeric_limits<double>::max();
          auto parameter = to_parameter_value(updated_params.wheel_radius);
          parameters_interface_->declare_parameter(prefix_ + "wheel_radius", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "wheel_separation_multiplier")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Correction factor for wheel separation";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.wheel_separation_multiplier);
          parameters_interface_->declare_parameter(prefix_ + "wheel_separation_multiplier", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "front_left_wheel_radius_multiplier")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Correction factor when radius of front left wheel differs from the nominal value in wheel_radius parameter";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.front_left_wheel_radius_multiplier);
          parameters_interface_->declare_parameter(prefix_ + "front_left_wheel_radius_multiplier", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "front_right_wheel_radius_multiplier")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Correction factor when radius of front right wheel differs from the nominal value in wheel_radius parameter";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.front_right_wheel_radius_multiplier);
          parameters_interface_->declare_parameter(prefix_ + "front_right_wheel_radius_multiplier", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "back_left_wheel_radius_multiplier")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Correction factor when radius of back left wheel differs from the nominal value in wheel_radius parameter";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.back_left_wheel_radius_multiplier);
          parameters_interface_->declare_parameter(prefix_ + "back_left_wheel_radius_multiplier", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "back_right_wheel_radius_multiplier")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Correction factor when radius of back right wheel differs from the nominal value in wheel_radius parameter";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.back_right_wheel_radius_multiplier);
          parameters_interface_->declare_parameter(prefix_ + "back_right_wheel_radius_multiplier", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "tf_frame_prefix_enable")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Enables or disables appending tf_prefix to tf frame ids";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.tf_frame_prefix_enable);
          parameters_interface_->declare_parameter(prefix_ + "tf_frame_prefix_enable", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "tf_frame_prefix")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Prefix to be appended to the tf frames, will be added to odom_id and base_frame_id before publishing. If the parameter is empty, controller's namespace will be used";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.tf_frame_prefix);
          parameters_interface_->declare_parameter(prefix_ + "tf_frame_prefix", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "odom_frame_id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the frame for odometry. This frame is parent of base_frame_id when controller publishes odometry";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.odom_frame_id);
          parameters_interface_->declare_parameter(prefix_ + "odom_frame_id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "base_frame_id")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Name of the robot's base frame that is child of the odometry frame";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.base_frame_id);
          parameters_interface_->declare_parameter(prefix_ + "base_frame_id", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pose_covariance_diagonal")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Odometry covariance for the encoder output of the robot for the pose";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pose_covariance_diagonal);
          parameters_interface_->declare_parameter(prefix_ + "pose_covariance_diagonal", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "twist_covariance_diagonal")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Odometry covariance for the encoder output of the robot for the speed";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.twist_covariance_diagonal);
          parameters_interface_->declare_parameter(prefix_ + "twist_covariance_diagonal", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "position_feedback")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Is there position feedback from hardware";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.position_feedback);
          parameters_interface_->declare_parameter(prefix_ + "position_feedback", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "open_loop")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "If set to true the odometry of the robot will be calculated from the commanded values and not from feedback";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.open_loop);
          parameters_interface_->declare_parameter(prefix_ + "open_loop", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "enable_odom_tf")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Publish transformation between odom_frame_id and base_frame_id";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.enable_odom_tf);
          parameters_interface_->declare_parameter(prefix_ + "enable_odom_tf", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "cmd_vel_timeout")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Timeout in seconds, after which input command on cmd_vel topic is considered outdated";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.cmd_vel_timeout);
          parameters_interface_->declare_parameter(prefix_ + "cmd_vel_timeout", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "publish_limited_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Publish limited velocity value";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.publish_limited_velocity);
          parameters_interface_->declare_parameter(prefix_ + "publish_limited_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "velocity_rolling_window_size")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Number of velocity samples the system will use to calculate the mean velocity for odometry updates";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.velocity_rolling_window_size);
          parameters_interface_->declare_parameter(prefix_ + "velocity_rolling_window_size", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "publish_rate")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Publishing rate (Hz) of the odometry and TF messages";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.publish_rate);
          parameters_interface_->declare_parameter(prefix_ + "publish_rate", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.has_velocity_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Enable/disable velocity limits for X direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.has_velocity_limits);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.has_velocity_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.has_acceleration_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Enable/disable acceleration limits for X direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.has_acceleration_limits);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.has_acceleration_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.has_jerk_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Enable/disable jerk limits for X direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.has_jerk_limits);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.has_jerk_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.max_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Maximum velocity in X direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.max_velocity);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.max_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.min_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Minimum velocity in X direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.min_velocity);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.min_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.max_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Maximum acceleration in X direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.max_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.max_acceleration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.min_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Minimum acceleration in X direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.min_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.min_acceleration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.max_jerk")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Maximum jerk in X direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.max_jerk);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.max_jerk", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.x.min_jerk")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Minimum jerk in X direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.x.min_jerk);
          parameters_interface_->declare_parameter(prefix_ + "linear.x.min_jerk", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.y.has_velocity_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Enable/disable velocity limits for Y direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.y.has_velocity_limits);
          parameters_interface_->declare_parameter(prefix_ + "linear.y.has_velocity_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.y.has_acceleration_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Enable/disable acceleration limits for Y direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.y.has_acceleration_limits);
          parameters_interface_->declare_parameter(prefix_ + "linear.y.has_acceleration_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.y.has_jerk_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Enable/disable jerk limits for Y direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.y.has_jerk_limits);
          parameters_interface_->declare_parameter(prefix_ + "linear.y.has_jerk_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.y.max_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Maximum velocity in Y direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.y.max_velocity);
          parameters_interface_->declare_parameter(prefix_ + "linear.y.max_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.y.min_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Minimum velocity in Y direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.y.min_velocity);
          parameters_interface_->declare_parameter(prefix_ + "linear.y.min_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.y.max_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Maximum acceleration in Y direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.y.max_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "linear.y.max_acceleration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.y.min_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Minimum acceleration in Y direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.y.min_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "linear.y.min_acceleration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.y.max_jerk")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Maximum jerk in Y direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.y.max_jerk);
          parameters_interface_->declare_parameter(prefix_ + "linear.y.max_jerk", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "linear.y.min_jerk")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Minimum jerk in Y direction";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.linear.y.min_jerk);
          parameters_interface_->declare_parameter(prefix_ + "linear.y.min_jerk", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.has_velocity_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Enable/disable angular velocity limits";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.has_velocity_limits);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.has_velocity_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.has_acceleration_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Enable/disable angular acceleration limits";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.has_acceleration_limits);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.has_acceleration_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.has_jerk_limits")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Enable/disable angular jerk limits";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.has_jerk_limits);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.has_jerk_limits", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.max_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Maximum angular velocity";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.max_velocity);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.max_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.min_velocity")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Minimum angular velocity";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.min_velocity);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.min_velocity", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.max_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Maximum angular acceleration";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.max_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.max_acceleration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.min_acceleration")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Minimum angular acceleration";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.min_acceleration);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.min_acceleration", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.max_jerk")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Maximum angular jerk";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.max_jerk);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.max_jerk", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "angular.z.min_jerk")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Minimum angular jerk";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.angular.z.min_jerk);
          parameters_interface_->declare_parameter(prefix_ + "angular.z.min_jerk", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "front_left_joint_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'front_left_joint_name': {}", validation_result.error()));
      }
      updated_params.front_left_joint_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "front_right_joint_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'front_right_joint_name': {}", validation_result.error()));
      }
      updated_params.front_right_joint_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "back_left_joint_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'back_left_joint_name': {}", validation_result.error()));
      }
      updated_params.back_left_joint_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "back_right_joint_name");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'back_right_joint_name': {}", validation_result.error()));
      }
      updated_params.back_right_joint_name = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "wheel_base");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'wheel_base': {}", validation_result.error()));
      }
      updated_params.wheel_base = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "wheel_separation");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'wheel_separation': {}", validation_result.error()));
      }
      updated_params.wheel_separation = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "wheel_radius");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = gt<double>(param, 0.0);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'wheel_radius': {}", validation_result.error()));
      }
      updated_params.wheel_radius = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "wheel_separation_multiplier");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.wheel_separation_multiplier = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "front_left_wheel_radius_multiplier");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.front_left_wheel_radius_multiplier = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "front_right_wheel_radius_multiplier");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.front_right_wheel_radius_multiplier = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "back_left_wheel_radius_multiplier");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.back_left_wheel_radius_multiplier = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "back_right_wheel_radius_multiplier");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.back_right_wheel_radius_multiplier = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "tf_frame_prefix_enable");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.tf_frame_prefix_enable = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "tf_frame_prefix");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.tf_frame_prefix = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "odom_frame_id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.odom_frame_id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "base_frame_id");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.base_frame_id = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "pose_covariance_diagonal");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.pose_covariance_diagonal = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "twist_covariance_diagonal");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.twist_covariance_diagonal = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "position_feedback");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.position_feedback = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "open_loop");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.open_loop = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "enable_odom_tf");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.enable_odom_tf = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "cmd_vel_timeout");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.cmd_vel_timeout = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "publish_limited_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.publish_limited_velocity = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "velocity_rolling_window_size");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.velocity_rolling_window_size = param.as_int();
      param = parameters_interface_->get_parameter(prefix_ + "publish_rate");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.publish_rate = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.has_velocity_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.has_velocity_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.has_acceleration_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.has_acceleration_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.has_jerk_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.has_jerk_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.max_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.max_velocity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.min_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.min_velocity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.max_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.max_acceleration = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.min_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.min_acceleration = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.max_jerk");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.max_jerk = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.x.min_jerk");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.x.min_jerk = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.y.has_velocity_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.y.has_velocity_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "linear.y.has_acceleration_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.y.has_acceleration_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "linear.y.has_jerk_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.y.has_jerk_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "linear.y.max_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.y.max_velocity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.y.min_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.y.min_velocity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.y.max_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.y.max_acceleration = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.y.min_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.y.min_acceleration = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.y.max_jerk");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.y.max_jerk = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "linear.y.min_jerk");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.linear.y.min_jerk = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.has_velocity_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.has_velocity_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.has_acceleration_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.has_acceleration_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.has_jerk_limits");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.has_jerk_limits = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.max_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.max_velocity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.min_velocity");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.min_velocity = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.max_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.max_acceleration = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.min_acceleration");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.min_acceleration = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.max_jerk");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.max_jerk = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "angular.z.min_jerk");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.angular.z.min_jerk = param.as_double();


      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
    }

    using userParameterUpdateCB = std::function<void(const Params&)>;
    void setUserCallback(const userParameterUpdateCB& callback){
      user_callback_ = callback;
    }

    void clearUserCallback(){
      user_callback_ = {};
    }

    private:
      void update_internal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = std::move(updated_params);
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;
      userParameterUpdateCB user_callback_;

      rclcpp::Logger logger_;
      std::mutex mutable mutex_;
  };

} // namespace mecanum_drive_controller
