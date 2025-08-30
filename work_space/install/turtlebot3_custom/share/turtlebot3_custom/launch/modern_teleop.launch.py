from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument

def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    robot_model = LaunchConfiguration('robot_model', default='burger')

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'
        ),
        DeclareLaunchArgument(
            'robot_model',
            default_value='burger',
            description='Robot model type'
        ),
        Node(
            package='turtlebot3_custom',
            executable='modern_teleop_controller',
            name='modern_teleop_controller',
            output='screen',
            parameters=[
                {'use_sim_time': use_sim_time},
                {'robot_model': robot_model}
            ]
        )
    ])
