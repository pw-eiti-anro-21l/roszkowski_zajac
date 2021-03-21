from setuptools import setup

package_name = 'changed_keys_ANROlab1'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='dominika',
    maintainer_email='domio626@gmail.com',
    description='Używanie klawiszy g-góra, d-dół, p-prawo, l- lewo do sterowania zolwiem',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
                'talker = changed_keys_ANROlab1.publisher_member_function:main',
        ],
    },
)
