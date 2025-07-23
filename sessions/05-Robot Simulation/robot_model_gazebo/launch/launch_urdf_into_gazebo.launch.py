import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.conditions import IfCondition, UnlessCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, LaunchConfiguration, PythonExpression
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution, PythonExpression
from launch.actions import TimerAction


def generate_launch_description():
    """
    Generate a launch description to load a URDF file and a world file into Gazebo.
    """

    # ======================== CONSTANTS AND FILE PATHS ======================== #

    # Name of the robot inside the URDF model
    robot_name_in_model = "three_wheeled_robot"

    # Initial pose of the robot in the world
    spawn_x_val = "0.0"  # X-coordinate of spawn position
    spawn_y_val = "0.0"  # Y-coordinate of spawn position
    spawn_z_val = "0.0"  # Z-coordinate of spawn position
    spawn_yaw_val = "0.00"  # Orientation (yaw angle) in radians

    # ===================== RESOLVE ABSOLUTE FILE PATHS ===================== #

    # Find the path of the 'gazebo_ros' package
    pkg_gazebo_ros = FindPackageShare(package="gazebo_ros").find("gazebo_ros")

    # Find the path of the 'urdf_tutorial' package
    urdf_tutorial_ros = FindPackageShare(package="urdf_tutorial").find("urdf_tutorial")

    # Find the package containing the robot description
    package_name = "robot_model_gazebo"  # Name of the package containing the robot's URDF file
    pkg_share = FindPackageShare(package=package_name).find(package_name)

    # Construct absolute paths for URDF and world files
    urdf_file_path = "urdf/three_wheeled_robot.urdf"  # Relative path to the URDF file describing the robot
    default_urdf_model_path = os.path.join(pkg_share, urdf_file_path)

    # Relative path to the Gazebo world file
    world_file_path = "worlds/empty_world.sdf"
    default_world_path = os.path.join(pkg_share, world_file_path)

    # Launch argument: Whether to run Gazebo in headless mode (without GUI)
    headless = LaunchConfiguration("headless")
    declare_simulator_cmd = DeclareLaunchArgument(
        name="headless",
        default_value="False",
        description="Whether to execute gzclient",
    )

    # Launch argument: Path to URDF model
    urdf_model = LaunchConfiguration("urdf_model")
    declare_urdf_model_path_cmd = DeclareLaunchArgument(
        name="urdf_model",
        default_value=default_urdf_model_path,
        description="Absolute path to robot urdf file",
    )

    # Launch argument: Whether to start the Gazebo simulator
    use_simulator = LaunchConfiguration("use_simulator")
    declare_use_simulator_cmd = DeclareLaunchArgument(
        name="use_simulator",
        default_value="True",
        description="Whether to start the simulator",
    )

    world = LaunchConfiguration("world")
    declare_world_cmd = DeclareLaunchArgument(
        name="world",
        default_value=default_world_path,
        description="Full path to the world model file to load",
    )

    # ===================== SPAWN ROS 2 NODES ===================== #

    # Start the robot_state_publisher node to publish robot states
    start_robot_state_publisher_cmd = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        parameters=[
            {
                "robot_description": Command(["xacro ", urdf_model]),
                "use_sim_time": True,
            }
        ],
    )

    # Publish joint states if GUI is not enabled
    start_joint_state_publisher_cmd = Node(
        package="joint_state_publisher",
        executable="joint_state_publisher",
        name="joint_state_publisher",
        parameters=[{"use_sim_time": True}],
    )

    # Start the Gazebo simulation server (headless mode if specified)
    start_gazebo_server_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([pkg_gazebo_ros, "launch", "gzserver.launch.py"])),
        condition=IfCondition(use_simulator),
        launch_arguments={
            "world": world,
            "verbose": "true",
            "use_sim_time": "true",
        }.items(),
    )

    # Start the Gazebo GUI client if not running in headless mode
    start_gazebo_client_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([pkg_gazebo_ros, "launch", "gzclient.launch.py"])),
        condition=IfCondition(PythonExpression([use_simulator, " and not ", headless])),
    )

    # Spawn the robot in Gazebo
    spawn_entity_cmd = Node(
        package="gazebo_ros",
        executable="spawn_entity.py",
        arguments=["-entity", robot_name_in_model, "-topic", "robot_description", "-x", spawn_x_val, "-y", spawn_y_val, "-z", spawn_z_val, "-Y", spawn_yaw_val],  # Robot name in the simulation  # Source topic for robot description  # Spawn position (X)  # Spawn position (Y)  # Spawn position (Z)  # Spawn orientation (Yaw)
        output="screen",
        parameters=[{"use_sim_time": True}],
    )

    # Launch RViz for visualization
    rviz_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(PathJoinSubstitution([urdf_tutorial_ros, "launch", "display.launch.py"])),
        condition=IfCondition(use_simulator),
        launch_arguments={
            "model": urdf_model,
            "use_sim_time": "true",
        }.items(),
    )

    # ===================== CREATE AND RETURN LAUNCH DESCRIPTION ===================== #

    # Create a LaunchDescription object to hold all launch actions
    ld = LaunchDescription()

    # Add declared launch arguments to the description
    ld.add_action(declare_simulator_cmd)
    ld.add_action(declare_urdf_model_path_cmd)
    ld.add_action(declare_use_simulator_cmd)
    ld.add_action(declare_world_cmd)

    # Add launch actions to start Gazebo, the robot state publisher, and RViz
    ld.add_action(start_gazebo_server_cmd)
    ld.add_action(start_gazebo_client_cmd)
    ld.add_action(spawn_entity_cmd)
    # ld.add_action(rviz_launch)
    ld.add_action(start_robot_state_publisher_cmd)
    ld.add_action(start_joint_state_publisher_cmd)

    return ld
