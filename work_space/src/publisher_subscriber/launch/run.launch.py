from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='publisher_subscriber',
            executable='publisher',
            name='publisher'
        ),
        Node(
            package='publisher_subscriber',
            executable='subscriber',
            name='subscriber'
        )
    ])