from setuptools import find_packages
from setuptools import setup

setup(
    name='pose_graph_tools_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('pose_graph_tools_msgs', 'pose_graph_tools_msgs.*')),
)
