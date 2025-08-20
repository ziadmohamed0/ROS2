from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='services_actions',
            executable='add_two_ints_server',
            name='server'
        ),
        Node(
            package='services_actions',
            executable='add_two_ints_client',
            name='client'
        )
    ])