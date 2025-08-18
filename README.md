# ROS2 Humble — Training & Advanced Workspace

[![ROS 2](https://img.shields.io/badge/ROS2-Humble-22314E.svg)](#)
[![Ubuntu 22.04](https://img.shields.io/badge/Ubuntu-22.04-E95420.svg)](#)
[![C++](https://img.shields.io/badge/Language-C++-00599C.svg)](#)
[![Python](https://img.shields.io/badge/Language-Python-3776AB.svg)](#)
[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](LICENSE)

Hands‑on ROS2 workspace for learning, practice, and reusable templates. Covers publishers/subscribers, services, actions, parameters, launch, URDF/xacro, rviz, and simulation.

---

## Repo layout

```
ROS2/
├── sessions/                # Notes and mini examples per session
└── work_space/              # Main ROS2 workspace (colcon)
    ├── src/                 # Your packages
    ├── build/               # Generated
    ├── install/             # Generated
    └── log/                 # Generated
```

---

## Environment

* ROS2 Humble Hawksbill
* Ubuntu 22.04
* C++17 with ament\_cmake
* Python 3.10 with ament\_python

---

## Quick start

Clone

```bash
git clone https://github.com/ziadmohamed0/ROS2.git
cd ROS2/work_space
```

Source ROS

```bash
source /opt/ros/humble/setup.bash
```

Build

```bash
colcon build --parallel-workers $(nproc)
source install/setup.bash
```

Run examples

```bash
# Replace with real package/node names when available
ros2 run <pkg_name> <node_exe>
ros2 launch <pkg_name> <launch_file>.launch.py
```

---

## Packages index

Add your packages here for fast discovery. Update as you add more.

| Package          | Lang       | Key nodes                        | Launch files              | Concepts                              |
| ---------------- | ---------- | -------------------------------- | ------------------------- | ------------------------------------- |
| `pkg_pubsub_*`   | Python/C++ | `talker`, `listener`             | `pubsub_demo.launch.py`   | QoS, timers, parameters               |
| `pkg_services_*` | C++        | `server`, `client`               | `services_demo.launch.py` | srv interfaces, blocking/non‑blocking |
| `pkg_actions_*`  | C++        | `action_server`, `action_client` | `actions_demo.launch.py`  | action goals, feedback, cancel        |
| `pkg_urdf_*`     | Python     | `state_publisher`                | `view_robot.launch.py`    | xacro, joints, TF2, rviz              |
| `pkg_gazebo_*`   | C++        | `spawner`                        | `gazebo_demo.launch.py`   | gazebo\_ros, controllers              |

> Tip: keep names consistent. Use lowercase with underscores.

---

## Coding standards

* C++: clang‑format (Google style tuned for ROS2) and clang‑tidy
* Python: ruff + black
* Messages/Services/Actions: `snake_case` names, clear fields, units in comments
* Headers: include guards or `#pragma once`, minimal includes, `const &` where possible

Install tooling

```bash
sudo apt install clang-format clang-tidy cppcheck
pip3 install pre-commit ruff black
pre-commit install
```

Run linters

```bash
# C++
ament_lint_auto
# Or manual
clang-format -i $(git ls-files "*.{hpp,h,cpp}")
clang-tidy $(git ls-files "*.cpp") -- -I./ -std=c++17

# Python
ruff check .
black --check .
```

---

## Testing

Unit tests

```bash
# C++ (GTest)
colcon test --packages-select <pkg_name>
colcon test-result --verbose

# Python (pytest)
colcon test --packages-select <pkg_name>
```

Launch tests

```python
# tests/test_launch.py (example)
import launch
import launch_ros.actions
from launch_ros.testing import ROS2TestFixture

def generate_test_description():
    node = launch_ros.actions.Node(package='pkg_pubsub_demo', executable='talker')
    return [node], {}
```

Coverage

```bash
colcon build --cmake-args -DCMAKE_BUILD_TYPE=Debug -DENABLE_COVERAGE=ON
colcon test --event-handlers console_direct+ --packages-select <pkg>
```

---

## Interfaces

Create IDL files

```
src/<pkg>/msg/Custom.msg
src/<pkg>/srv/AddTwoInts.srv
src/<pkg>/action/CountDown.action
```

`CMakeLists.txt`

```cmake
find_package(rosidl_default_generators REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Custom.msg"
  "srv/AddTwoInts.srv"
  "action/CountDown.action"
)
ament_export_dependencies(rosidl_default_runtime)
```

`package.xml`

```xml
<buildtool_depend>ament_cmake</buildtool_depend>
<depend>rclcpp</depend>
<depend>rclcpp_action</depend>
<depend>rosidl_default_runtime</depend>
<member_of_group>rosidl_interface_packages</member_of_group>
```

Use generated headers

```cpp
#include "<pkg>/action/count_down.hpp"
#include "<pkg>/srv/add_two_ints.hpp"
```

---

## Launch patterns

Declare parameters, remaps, and composition the same way across packages.

```python
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from launch.actions import DeclareLaunchArgument

def generate_launch_description():
    rate = LaunchConfiguration('rate', default='10.0')
    return LaunchDescription([
        DeclareLaunchArgument('rate'),
        Node(
            package='pkg_pubsub_demo',
            executable='talker',
            name='talker',
            parameters=[{'rate': rate}],
            remappings=[('/chatter', '/demo/chatter')],
            output='screen'
        )
    ])
```

---

## URDF/xacro and visualization

Preview robot in RViz

```bash
ros2 launch <pkg_urdf> view_robot.launch.py use_sim_time:=false
```

`view_robot.launch.py`

```python
from launch_ros.actions import Node
from launch import LaunchDescription
from ament_index_python.packages import get_package_share_directory
from os.path import join

def generate_launch_description():
    xacro_file = join(get_package_share_directory('<pkg_urdf>'), 'urdf', 'robot.urdf.xacro')
    return LaunchDescription([
        Node(
            package='xacro', executable='xacro',
            arguments=[xacro_file], output='screen'
        ),
        Node(
            package='robot_state_publisher', executable='robot_state_publisher',
            parameters=[{'robot_description': open(xacro_file).read()}]
        ),
        Node(package='rviz2', executable='rviz2')
    ])
```

---

## Gazebo quick recipe

Install

```bash
sudo apt install ros-humble-gazebo-ros-pkgs
```

Spawn

```bash
ros2 launch gazebo_ros empty_world.launch.py
ros2 run gazebo_ros spawn_entity.py -entity my_bot -topic robot_description
```

---

## Dev productivity

* VS Code: CMake Tools, Python, ROS, clangd
* Tasks: `.vscode/tasks.json` for build, test, lint
* Pre-commit hooks: format and lint on commit
* GitHub Actions: build and test on push (template below)

`.github/workflows/ci.yaml`

```yaml
name: ci
on: [push, pull_request]
jobs:
  build:
    runs-on: ubuntu-22.04
    steps:
      - uses: actions/checkout@v4
      - uses: ros-tooling/setup-ros@v0.7
        with:
          required-ros-distributions: humble
      - uses: ros-tooling/action-ros-ci@v0.3
        with:
          target-ros2-distro: humble
          package-name: |
            <pkg_one>
            <pkg_two>
```

---

## Debugging

* echo topics `ros2 topic echo /chatter`
* introspection `ros2 node|topic|service|action list/info`
* TF tree `ros2 run tf2_tools view_frames`
* rqt tools `rqt`, `rqt_graph`, `rqt_plot`

---

## Roadmap

* [ ] Fill real package names and nodes
* [ ] Add sample rosbag and replay script
* [ ] Add unit and launch tests per package
* [ ] Add CI workflow
* [ ] Add Docker/devcontainer
* [ ] Document common errors and fixes

---

## License

MIT

---

## Author

Ziad Mohamed Fathy
Mechatronics and Embedded Systems Engineer
LinkedIn: www.linkedin.com/in/ziad-fathy
