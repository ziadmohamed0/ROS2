import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ziad/Ziad_Repo/ROS2/ros2_ws/install/my_controller_py'
