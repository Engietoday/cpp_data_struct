# CMakeList.txt : CMake project for cpp_data_struct, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)


# Add source to this project's executable.
add_executable (cpp_data_struct "cpp_data_struct.cpp"  "lib/graph.h" "lib/graph.cpp")

# TODO: Add tests and install targets if needed.

