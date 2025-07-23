import os

# Import required ROS 2 launch modules and utilities
from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    """
    Generates the launch description for setting up the simulation environment using
    Ignition Gazebo and ROS 2 bridge. This launch script includes the following:

    - Declaring a launch argument for specifying the SDF file.
    - Including the Ignition Gazebo launch file to start the simulation.
    - Setting up the ROS-Ignition bridge for communication between ROS 2 and Ignition Gazebo.
    """

    # Get the package directories for necessary resources
    pkg_robot_model_gazebo = get_package_share_directory("robot_model_gazebo")  # Retrieve the package path for robot model
    pkg_ros_ign_gazebo = get_package_share_directory("ros_ign_gazebo")  # Retrieve the package path for Ignition Gazebo

    # Declare launch argument for specifying the SDF file path
    local_sdf = DeclareLaunchArgument(
        "sdf_path",
        default_value=os.path.join(pkg_robot_model_gazebo, "worlds", "diff_drive.sdf"),
        description="Path to the local SDF file used in the simulation.",
    )

    # Include Ignition Gazebo launch file
    # This ensures that Ignition Gazebo is launched with the specified SDF world file
    ign_gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(pkg_ros_ign_gazebo, "launch", "ign_gazebo.launch.py")),
        launch_arguments={"ign_args": LaunchConfiguration("sdf_path")}.items(),
    )

    # Bridge node to enable communication between ROS 2 and Ignition Gazebo
    # This allows message exchange between the two environments
    bridge = Node(
        package="ros_ign_bridge",  # The ROS 2 to Ignition bridge package
        executable="parameter_bridge",  # Bridge executable for topic communication
        arguments=[
            # Bridge the simulation clock (Ignition → ROS 2)
            "/clock@rosgraph_msgs/msg/Clock[ignition.msgs.Clock",
            # Bridge velocity commands (ROS 2 → Ignition)
            "/model/vehicle_green/cmd_vel@geometry_msgs/msg/Twist@ignition.msgs.Twist",
            # Bridge odometry data (Ignition → ROS 2)
            "/model/vehicle_green/odometry@nav_msgs/msg/Odometry@ignition.msgs.Odometry",
        ],
        parameters=[
            {
                # Configure QoS settings foOdometryr reliable communication
                "qos_overrides./model/vehicle_blue.subscriber.reliability": "reliable",
                "qos_overrides./model/vehicle_green.subscriber.reliability": "reliable",
            }
        ],
        remappings=[
            # Remap topics to follow a structured namespace for better organization
            ("/model/vehicle_green/cmd_vel", "/green_robot/cmd_vel"),  # Remap velocity command topic
            ("/model/vehicle_green/odometry", "/green_robot/odometry"),  # Remap odometry topic
        ],
        output="screen",  # Output log messages to the terminal
    )

    # Return the complete launch description containing all components
    return LaunchDescription(
        [
            local_sdf,  # Declare the local SDF file path
            ign_gazebo,  # Launch the Ignition Gazebo simulation
            bridge,  # Start the ROS-Ignition bridge
        ]
    )
