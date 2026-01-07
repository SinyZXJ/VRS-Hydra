from setuptools import find_packages
from setuptools import setup

setup(
    name='hydra_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('hydra_msgs', 'hydra_msgs.*')),
)
