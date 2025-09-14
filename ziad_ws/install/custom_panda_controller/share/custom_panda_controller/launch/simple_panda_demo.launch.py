import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.conditions import IfCondition
from launch.substitutions import Command, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from moveit_configs_utils import MoveItConfigsBuilder

def generate_launch_description():
    
    # Launch arguments
    use_sim_time = LaunchConfiguration("use_sim_time", default=True)
    
    # Get robot description
    robot_description_content = Command([
        'xacro ', 
        PathJoinSubstitution([
            FindPackageShare('custom_panda_controller'),
            'urdf',
            'simple_panda.urdf.xacro'
        ])
    ])
    
    robot_description = {'robot_description': robot_description_content}
    robot_description_semantic_content = Command([
        'cat ',
        PathJoinSubstitution([
            FindPackageShare('custom_panda_controller'),
            'config',
            'panda.srdf'
        ])
    ])
    
    robot_description_semantic = {'robot_description_semantic': robot_description_semantic_content}
    
    # Kinematics config
    kinematics_yaml = PathJoinSubstitution([
        FindPackageShare('custom_panda_controller'),
        'config',
        'kinematics.yaml'
    ])
    
    # Joint limits config
    joint_limits_yaml = PathJoinSubstitution([
        FindPackageShare('custom_panda_controller'),
        'config',
        'joint_limits.yaml'
    ])
    
    # OMPL planning config
    ompl_planning_yaml = PathJoinSubstitution([
        FindPackageShare('custom_panda_controller'),
        'config',
        'ompl_planning.yaml'
    ])
    
    # Planning scene monitor parameters
    planning_scene_monitor_parameters = {
        "publish_planning_scene": True,
        "publish_geometry_updates": True,
        "publish_state_updates": True,
        "publish_transforms_updates": True,
    }
    
    # Start Gazebo
    gazebo = ExecuteProcess(
        cmd=['gazebo', '--verbose', '-s', 'libgazebo_ros_factory.so'],
        output='screen'
    )
    
    # Robot state publisher
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[robot_description, {'use_sim_time': use_sim_time}],
        output='screen'
    )
    
    # Spawn robot in Gazebo
    spawn_entity = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        arguments=['-topic', 'robot_description', '-entity', 'panda', '-z', '1.0'],
        output='screen'
    )
    
    # MoveIt move_group node
    move_group_node = Node(
        package="moveit_ros_move_group",
        executable="move_group",
        output="screen",
        parameters=[
            robot_description,
            robot_description_semantic,
            kinematics_yaml,
            joint_limits_yaml,
            ompl_planning_yaml,
            planning_scene_monitor_parameters,
            {"use_sim_time": use_sim_time}
        ],
    )
    
    # RViz
    rviz_config_file = PathJoinSubstitution([
        FindPackageShare('custom_panda_controller'),
        'rviz',
        'moveit.rviz'
    ])
    
    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2_moveit",
        output="log",
        arguments=["-d", rviz_config_file],
        parameters=[
            robot_description,
            robot_description_semantic,
            ompl_planning_yaml,
            kinematics_yaml,
            {"use_sim_time": use_sim_time}
        ],
    )
    
    # Planning Scene Monitor
    planning_scene_monitor = Node(
        package="moveit_ros_planning_scene_monitor",
        executable="planning_scene_monitor",
        name="planning_scene_monitor",
        output="screen",
        parameters=[
            robot_description,
            robot_description_semantic,
            planning_scene_monitor_parameters,
            {"use_sim_time": use_sim_time}
        ]
    )
    
    return LaunchDescription([
        DeclareLaunchArgument("use_sim_time", default_value="true"),
        gazebo,
        robot_state_publisher,
        spawn_entity,
        move_group_node,
        planning_scene_monitor,
        rviz_node,
    ])