from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='services_actions',
            executable='count_down_action_server',
            name='action_server',
        ),
        Node(
            package='services_actions',
            executable='count_down_action_client',
            name='action_client',
        )
    ])