from setuptools import find_packages
from setuptools import setup

setup(
    name='kimera_pgmo_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('kimera_pgmo_msgs', 'kimera_pgmo_msgs.*')),
)
