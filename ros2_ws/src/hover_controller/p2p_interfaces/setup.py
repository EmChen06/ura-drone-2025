from setuptools import setup
import os
from glob import glob

package_name = 'p2p_interfaces'

setup(
    name=package_name,
    version='0.0.1',
    packages=[],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'action'), glob('action/*.action')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Sam Xiao',
    maintainer_email='s57xiao@uwaterloo.ca',
    description='Interfaces (actions, messages) for p2p_controller project',
    license='MIT',
    tests_require=['pytest'],
    entry_points={},
)
