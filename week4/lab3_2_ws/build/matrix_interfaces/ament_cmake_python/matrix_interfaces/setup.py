from setuptools import find_packages
from setuptools import setup

setup(
    name='matrix_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('matrix_interfaces', 'matrix_interfaces.*')),
)
