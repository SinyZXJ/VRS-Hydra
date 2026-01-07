from setuptools import find_packages
from setuptools import setup

setup(
    name='semantic_inference_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('semantic_inference_msgs', 'semantic_inference_msgs.*')),
)
