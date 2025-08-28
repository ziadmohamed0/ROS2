from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.substitutions import LaunchConfiguration
from launch.conditions import IfCondition

def generate_launch_description():
    # Declare launch arguments
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    robot_model = LaunchConfiguration('robot_model', default='burger')
    start_gazebo = LaunchConfiguration('start_gazebo', default='false')
    
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
            'start_gazebo',
            default_value='false',
            description='Start Gazebo simulation'
        ),

        # Optional: Start Gazebo World
        ExecuteProcess(
            cmd=['ros2', 'launch', 'turtlebot3_gazebo', 'turtlebot3_world.launch.py'],
            condition=IfCondition(start_gazebo),
            output='screen'
        ),

        # Modern Teleop Controller Node
        Node(
            package='turtlebot3_custom',
            executable='modern_teleop_controller',
            name='modern_teleop_controller',
            parameters=[
                {'use_sim_time': use_sim_time},
                {'robot_model': robot_model}
            ],
            output='screen',
            prefix='gnome-terminal --'  # Optional: Run in separate terminal
        ),

        # Optional: Launch RViz for visualization
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', '$(find-pkg-share turtlebot3_description)/rviz/model.rviz'],
            condition=IfCondition(LaunchConfiguration('start_rviz', default='false')),
            parameters=[{'use_sim_time': use_sim_time}],
            output='screen'
        ),
    ])