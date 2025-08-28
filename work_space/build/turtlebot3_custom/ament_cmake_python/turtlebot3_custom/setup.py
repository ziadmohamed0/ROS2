from setuptools import find_packages
from setuptools import setup

setup(
    name='turtlebot3_custom',
    version='0.0.0',
    packages=find_packages(
        include=('turtlebot3_custom', 'turtlebot3_custom.*')),
)
