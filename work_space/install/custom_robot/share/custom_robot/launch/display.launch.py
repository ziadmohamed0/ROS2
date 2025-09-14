#!/usr/bin/env python3

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    
    # Get URDF file path - adjust this path to your actual URDF location
    urdf_file_path = '/home/ziad/Ziad_WS/ROS2/work_space/src/custom_robot/urdf/custom_robot.urdf'  # غير المسار ده
    
    # Read URDF content
    try:
        with open(urdf_file_path, 'r') as urdf_file:
            robot_description = urdf_file.read()
    except:
        # Fallback - put your URDF content directly here if file not found
        robot_description = """
        <!-- Your URDF content here if file path doesn't work -->
        """
    
    # Launch arguments
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='true',
        description='Use simulation time'
    )
    
    rviz_arg = DeclareLaunchArgument(
        'rviz',
        default_value='true',
        description='Start RViz2'
    )
    
    # Robot state publisher
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{
            'robot_description': robot_description,
            'use_sim_time': LaunchConfiguration('use_sim_time')
        }]
    )
    
    # Joint state publisher
    joint_state_publisher = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        parameters=[{
            'use_sim_time': LaunchConfiguration('use_sim_time')
        }]
    )
    
    # Start Gazebo Ignition with default empty world
    gazebo = ExecuteProcess(
        cmd=['ign', 'gazebo', '-v', '3'],
        output='screen'
    )
    
    # Spawn robot in Gazebo
    spawn_robot = ExecuteProcess(
        cmd=[
            'ign', 'service', '-s', '/world/default/create',
            '--reqtype', 'gz.msgs.EntityFactory',
            '--reptype', 'gz.msgs.Boolean',
            '--timeout', '5000',
            '--req',
            'sdf_filename: "model://ground_plane", name: "ground_plane"'
        ],
        output='screen'
    )
    
    # Better way to spawn robot
    spawn_robot_sdf = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=[
            '-string', robot_description,
            '-name', 'three_wheel_robot',
            '-x', '0.0', '-y', '0.0', '-z', '0.1'
        ],
        output='screen'
    )
    
    # Bridge between ROS 2 and Gazebo
    bridge = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/cmd_vel@geometry_msgs/msg/Twist@gz.msgs.Twist',
            '/odom@nav_msgs/msg/Odometry@gz.msgs.Odometry', 
            '/scan@sensor_msgs/msg/LaserScan@gz.msgs.LaserScan',
            '/clock@rosgraph_msgs/msg/Clock@gz.msgs.Clock'
        ],
        parameters=[{
            'use_sim_time': LaunchConfiguration('use_sim_time')
        }],
        output='screen'
    )
    
    # RViz2 with basic config
    rviz2 = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', '/opt/ros/jazzy/share/rviz2/default.rviz'],
        parameters=[{
            'use_sim_time': LaunchConfiguration('use_sim_time')
        }],
        output='screen',
        condition=IfCondition(LaunchConfiguration('rviz'))
    )
    
    # TF publishers
    base_footprint_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        arguments=['0', '0', '0', '0', '0', '0', 'base_footprint', 'base_link']
    )
    
    # Teleop keyboard
    teleop = Node(
        package='teleop_twist_keyboard',
        executable='teleop_twist_keyboard',
        name='teleop_keyboard',
        output='screen',
        prefix='xterm -e'
    )
    
    return LaunchDescription([
        # Arguments
        use_sim_time_arg,
        rviz_arg,
        
        # Nodes
        robot_state_publisher,
        joint_state_publisher, 
        base_footprint_tf,
        gazebo,
        spawn_robot_sdf,
        bridge,
        rviz2,
        teleop,
    ])