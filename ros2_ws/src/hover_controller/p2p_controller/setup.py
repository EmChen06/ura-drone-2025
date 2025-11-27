from setuptools import setup

package_name = 'p2p_controller'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Sam Xiao',
    maintainer_email='s57xiao@uwaterloo.ca',
    description='Point-to-point hover controller for Crazyflie using PID and ROS 2 Actions',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'hover_controller = p2p_controller.hover_controller:main',
        ],
    },
)
