from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.conditions import IfCondition

def generate_launch_description():
    run_action = LaunchConfiguration("run_action")
    run_service = LaunchConfiguration("run_service")

    return LaunchDescription([
        DeclareLaunchArgument("run_service", default_value="true"),
        DeclareLaunchArgument("run_action", default_value="flase"),

        Node(
            package='services_actions',
            executable='count_down_action_server',
            name='action_server',
            condition=IfCondition(run_action)
        ),
        Node(
            package='services_actions',
            executable='count_down_action_client',
            name='action_client',
            condition=IfCondition(run_action)
        ),

        Node(
            package='services_actions',
            executable='add_two_ints_server',
            name='service_server',
            condition=IfCondition(run_service)
        ),
        Node(
            package='services_actions',
            executable='add_two_ints_client',
            name='service_client',
            condition=IfCondition(run_service)
        )
    ])