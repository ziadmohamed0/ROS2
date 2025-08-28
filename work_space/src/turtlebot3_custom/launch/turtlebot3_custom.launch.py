from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.substitutions import LaunchConfiguration
from launch.conditions import IfCondition

def generate_launch_description():
    # Declare launch arguments
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    robot_model = LaunchConfiguration('robot_model', default='burger')
    
    return LaunchDescription([
            # Launch arguments
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation time if true'
        ),

        DeclareLaunchArgument(
            'robot_model',
            default_value='burger',
            description='TurtleBot3 model (burger, waffle, waffle_pi)'
        ),

        DeclareLaunchArgument(
            'start_rviz',
            default_value='false',
            description='Start RViz'
        ),

        # TurtleBot3 Controller Node
        Node(
            package='turtlebot3_custom',
            executable='turtlebot3_controller',
            name='turtlebot3_controller',
            parameters=[{'use_sim_time': use_sim_time}],
            output='screen'
        ),
        
        # Robot Status Server
        Node(
            package='turtlebot3_custom',executable='robot_status_server',
            name='robot_status_server',
            parameters=[{'use_sim_time': use_sim_time}],
            output='screen'
        ),
        
        # Navigation Action Server
        Node(
            package='turtlebot3_custom',
            executable='navigation_action_server',
            name='navigation_action_server',
            parameters=[{'use_sim_time': use_sim_time}],
            output='screen'
        ),
        
        # Optional: Start RViz
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            condition=IfCondition(LaunchConfiguration('start_rviz')),
            output='screen'
        ),  
    ])