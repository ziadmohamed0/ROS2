from setuptools import find_packages
from setuptools import setup

setup(
    name='ros2_service',
    version='0.0.0',
    packages=find_packages(
        include=('ros2_service', 'ros2_service.*')),
)
