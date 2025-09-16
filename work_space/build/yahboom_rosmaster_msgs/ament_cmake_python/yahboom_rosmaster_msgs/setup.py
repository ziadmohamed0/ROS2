from setuptools import find_packages
from setuptools import setup

setup(
    name='yahboom_rosmaster_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('yahboom_rosmaster_msgs', 'yahboom_rosmaster_msgs.*')),
)
