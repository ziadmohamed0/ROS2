from setuptools import find_packages
from setuptools import setup

setup(
    name='srv_act_ros2',
    version='0.0.0',
    packages=find_packages(
        include=('srv_act_ros2', 'srv_act_ros2.*')),
)
