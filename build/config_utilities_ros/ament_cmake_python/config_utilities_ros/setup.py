from setuptools import find_packages
from setuptools import setup

setup(
    name='config_utilities_ros',
    version='2.0.0',
    packages=find_packages(
        include=('config_utilities_ros', 'config_utilities_ros.*')),
)
