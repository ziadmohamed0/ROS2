```markdown
# ROS2 Humble - Diploma Sessions & Workspace Code

This repository contains ROS2 (Humble) training sessions and workspace code developed during the diploma program.

---

## Repository Structure

```

📁 diploma\_sessions/
├── session\_01\_intro/
├── session\_02\_publish\_subscribe/
├── session\_03\_services\_actions/
└── ...

📁 ros2\_ws/
├── src/
│   ├── pkg\_01/
│   ├── pkg\_02/
│   └── ...
├── install/
├── build/
└── log/

````

- `diploma_sessions/`  
  Training session materials, examples, and practice code.

- `ros2_ws/`  
  Standard ROS2 workspace containing custom packages.

---

## Environment

- ROS2 Distribution: **Humble Hawksbill**
- Operating System: **Ubuntu 22.04**
- Programming Languages: **C++**, **Python**

---

## Setup Instructions

### 1. Clone the Repository

```bash
git clone https://github.com/<your-username>/<your-repo-name>.git
cd <your-repo-name>/ros2_ws
````

### 2. Source ROS2 Environment

```bash
source /opt/ros/humble/setup.bash
```

### 3. Build the Workspace

```bash
colcon build
source install/setup.bash
```

---

## Example Packages

| Package  | Language | Description                        |
| -------- | -------- | ---------------------------------- |
| `pkg_01` | Python   | Basic publisher/subscriber example |
| `pkg_02` | C++      | Action server for robot control    |

---

## Contribution Guide

1. Fork the repository
2. Create a new branch for your changes
3. Commit and push
4. Open a pull request

---

## License

This project is licensed under the [MIT License](LICENSE)

---

## Author

**Ziad Mohamed Fathy**
Mechatronics & Embedded Systems Engineer
[LinkedIn Profile](https://linkedin.com/in/ziadmohamedfathy)

```

Let me know if you want to auto-fill real package names or add session descriptions.
```
