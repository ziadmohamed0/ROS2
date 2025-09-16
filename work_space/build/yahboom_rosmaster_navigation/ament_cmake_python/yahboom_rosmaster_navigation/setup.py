from setuptools import find_packages
from setuptools import setup

setup(
    name='yahboom_rosmaster_navigation',
    version='0.0.0',
    packages=find_packages(
        include=('yahboom_rosmaster_navigation', 'yahboom_rosmaster_navigation.*')),
)
