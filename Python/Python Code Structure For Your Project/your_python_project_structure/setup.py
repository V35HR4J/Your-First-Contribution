#!/usr/bin/env python

"""The setup script."""

from setuptools import setup, find_packages

with open('README.rst') as readme_file:
    readme = readme_file.read()

with open('HISTORY.rst') as history_file:
    history = history_file.read()

requirements = ['Click>=7.0', ]

test_requirements = [ ]

setup(
    author="Hacktoberfest 2021",
    author_email='email@hacktoberfest2021.com',
    python_requires='>=3.6',
    classifiers=[
        'Development Status :: 2 - Pre-Alpha',
        'Intended Audience :: Developers',
        'License :: OSI Approved :: GNU General Public License v3 (GPLv3)',
        'Natural Language :: English',
        'Programming Language :: Python :: 3',
        'Programming Language :: Python :: 3.6',
        'Programming Language :: Python :: 3.7',
        'Programming Language :: Python :: 3.8',
    ],
    description="A Comprehensive Python Project CodeStructure For Easing Things Up. ",
    entry_points={
        'console_scripts': [
            'your_python_project_structure=your_python_project_structure.cli:main',
        ],
    },
    install_requires=requirements,
    license="GNU General Public License v3",
    long_description=readme + '\n\n' + history,
    include_package_data=True,
    keywords='your_python_project_structure',
    name='your_python_project_structure',
    packages=find_packages(include=['your_python_project_structure', 'your_python_project_structure.*']),
    test_suite='tests',
    tests_require=test_requirements,
    url='https://github.com/hacktoberfest2021/your_python_project_structure',
    version='0.1.0',
    zip_safe=False,
)
