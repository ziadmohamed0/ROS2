import os

# Import required ROS 2 launch modules and utilities
from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    """
    Generates a launch description for running Ignition Gazebo with a ROS 2 bridge.

    This script sets up a launch configuration for a differential drive robot in
    an Ignition Gazebo simulation and enables ROS 2 communication through a bridge node.
    """

    # Get the package directories for necessary resources
    pkg_robot_model_gazebo = get_package_share_directory("robot_model_gazebo")  # Retrieve the package path for robot model
    pkg_ros_ign_gazebo = get_package_share_directory("ros_ign_gazebo")  # Retrieve the package path for Ignition Gazebo

    # Declare launch argument for specifying the SDF file path
    local_sdf = DeclareLaunchArgument(
        "sdf_path",
        default_value=os.path.join(pkg_robot_model_gazebo, "worlds", "complete_robot.sdf"),
        description="Path to the local SDF file used in the simulation.",
    )

    # Include Ignition Gazebo launch file
    # This ensures that Ignition Gazebo is launched with the specified SDF world file
    ign_gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(pkg_ros_ign_gazebo, "launch", "ign_gazebo.launch.py")),
        launch_arguments={
            "ign_args": LaunchConfiguration("sdf_path"),
        }.items(),
    )

    # Uncomment the following section if visualization in RViz is required
    declare_use_rviz_arg = DeclareLaunchArgument("rviz", default_value="true", description="Open RViz.")

    # Uncomment this section to launch RViz with a predefined configuration file
    rviz = Node(
        package="rviz2",
        executable="rviz2",
        arguments=["-d", os.path.join(pkg_robot_model_gazebo, "rviz", "gpu_lidar_bridge.rviz")],
        condition=IfCondition(LaunchConfiguration("rviz")),
    )

    # Bridge node to enable communication between ROS 2 and Ignition Gazebo
    # This allows message exchange between the two environments
    bridge = Node(
        package="ros_ign_bridge",  # The ROS 2 to Ignition bridge package
        executable="parameter_bridge",  # Bridge executable for topic communication
        arguments=[
            # Bridge the simulation clock (Ignition → ROS 2)
            "/clock@rosgraph_msgs/msg/Clock[ignition.msgs.Clock",
            # Bridge joint states for the robot (Ignition → ROS 2)
            "/world/complete_robot_sim/model/vehicle_green/joint_state@sensor_msgs/msg/JointState[ignition.msgs.Model",
            # Bridge velocity commands (ROS 2 → Ignition)
            "/model/vehicle_green/cmd_vel@geometry_msgs/msg/Twist@ignition.msgs.Twist",
            # Bridge odometry data (Ignition → ROS 2)
            "/model/vehicle_green/odometry@nav_msgs/msg/Odometry@ignition.msgs.Odometry",
            "lidar@sensor_msgs/msg/LaserScan@ignition.msgs.LaserScan",
            "/lidar/points@sensor_msgs/msg/PointCloud2@ignition.msgs.PointCloudPacked",
        ],
        parameters=[
            {
                # Configure QoS settings for reliable communication
                "qos_overrides./model/vehicle_blue.subscriber.reliability": "reliable",
                "qos_overrides./model/vehicle_green.subscriber.reliability": "reliable",
            }
        ],
        remappings=[
            # Remap topics to follow a structured namespace for better organization
            ("/model/vehicle_green/cmd_vel", "/green_robot/cmd_vel"),  # Remap velocity command topic
            ("/model/vehicle_green/odometry", "/green_robot/odometry"),  # Remap odometry topic
            ("/world/complete_robot_sim/model/vehicle_green/joint_state", "/green_robot/joint_states"),
            ("/lidar", "/green_robot/lidar"),
            ("/lidar/points", "/green_robot/lidar/points"),
        ],
        output="screen",  # Output log messages to the terminal
    )

    # Return the complete launch description containing all components
    return LaunchDescription(
        [
            local_sdf,  # Declare the local SDF file path
            ign_gazebo,  # Launch the Ignition Gazebo simulation
            declare_use_rviz_arg,  # Uncomment if RViz visualization is needed
            bridge,  # Start the ROS-Ignition bridge
            rviz,  # Uncomment to enable RViz visualization
        ]
    )
