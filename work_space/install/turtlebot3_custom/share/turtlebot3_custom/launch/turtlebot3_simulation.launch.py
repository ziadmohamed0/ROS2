import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    # Get the launch directory
    pkg_gazebo_ros = FindPackageShare(package='gazebo_ros').find('gazebo_ros')
    pkg_turtlebot3_gazebo = FindPackageShare(package='turtlebot3_gazebo').find('turtlebot3_gazebo')
    
    # Launch configuration variables
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')
    world = LaunchConfiguration('world')
    
    # Declare the launch arguments
    declare_world_cmd = DeclareLaunchArgument(
        'world',
        default_value=os.path.join(pkg_turtlebot3_gazebo, 'worlds', 'turtlebot3_world.world'),
        description='Full path to world model file to load')
    
    # Start Gazebo server
    start_gazebo_server_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(pkg_gazebo_ros, 'launch', 'gzserver.launch.py')),
        launch_arguments={'world': world}.items())

    # Start Gazebo client    
    start_gazebo_client_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(pkg_gazebo_ros, 'launch', 'gzclient.launch.py')))

    # Robot State Publisher
    robot_state_publisher_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(pkg_turtlebot3_gazebo, 'launch', 'robot_state_publisher.launch.py')),
        launch_arguments={'use_sim_time': use_sim_time}.items())

    # Spawn TurtleBot3
    spawn_turtlebot_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(pkg_turtlebot3_gazebo, 'launch', 'spawn_turtlebot3.launch.py')),
        launch_arguments={'use_sim_time': use_sim_time}.items())

    # Include custom nodes
    custom_nodes_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(FindPackageShare('turtlebot3_custom').find('turtlebot3_custom'), 'launch', 'turtlebot3_custom.launch.py')),
        launch_arguments={'use_sim_time': use_sim_time}.items())

    # Create the launch description and populate
    ld = LaunchDescription()

    # Add the commands to the launch description
    ld.add_action(declare_world_cmd)
    ld.add_action(start_gazebo_server_cmd)
    ld.add_action(start_gazebo_client_cmd)
    ld.add_action(robot_state_publisher_cmd)
    ld.add_action(spawn_turtlebot_cmd)
    ld.add_action(custom_nodes_cmd)

    return ld