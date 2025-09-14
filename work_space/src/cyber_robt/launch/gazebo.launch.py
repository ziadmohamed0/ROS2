import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command

def generate_launch_description():
    gazebo_pkg = FindPackageShare(package="gazebo_ros").find("gazebo_ros")
    cyber_Robot_pkg = FindPackageShare(package="cyber_robt").find("cyber_robt")
    urdf_model_path = '/home/ziad//Ziad_WS/ROS2/work_space/install/cyber_robt/share/cyber_robt/urdf/cyber_robt.urdf'

    # Load URDF contents as string
    with open(urdf_model_path, 'r') as infp:
        robot_desc = infp.read()

    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(gazebo_pkg,"launch","gazebo.launch.py"))
    )
            
    tf_footprint_base = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="tf_footprint_base",
        arguments=["0","0","0","0","0","0","base_link","base_footprint"]
    )

    # Robot state publisher
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': robot_desc,
            'use_sim_time': True
        }]
    )

    # Joint state publisher
    joint_state_publisher = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        output='screen'
    )

    # Optional GUI for joints
    joint_state_gui = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        output='screen'
    )

    # Spawn robot in Gazebo
    spawn = Node(
        package='gazebo_ros',
        executable="spawn_entity.py",
        arguments=["-file", urdf_model_path, "-entity", "cyber_robt"],
        output="screen",
    )
        
    ld = LaunchDescription()
    ld.add_action(gazebo)
    ld.add_action(tf_footprint_base)
    ld.add_action(robot_state_publisher)
    ld.add_action(joint_state_publisher)
    ld.add_action(joint_state_gui)
    ld.add_action(spawn)

    return ld