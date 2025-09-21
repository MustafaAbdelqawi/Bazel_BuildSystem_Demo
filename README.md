# Bazel_BuildSystem_Demo

Repo to test Bazel build system with C++ project on a Macbook machine with M3 chip

# In this Repo
- C++ Hello World project ``main.cpp`` built with Bazel build system
- Folder ``bazellib`` is a C++ library built with Bazel build system and added as a dependency in the main hello world Project
- Folder ``CMakeLib`` is a C++ library pre-built with CMake and linked to the Bazel priject as dependency.
- Folder ``cmakeproject`` is a C++ library to be build using CMake but the build process is to be triggered by Bazel build system using ``rules_foreign_cc``