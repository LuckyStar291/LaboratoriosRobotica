from setuptools import find_packages
from setuptools import setup

setup(
    name='perro_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('perro_interfaces', 'perro_interfaces.*')),
)
