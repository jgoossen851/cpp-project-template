cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(Template VERSION 0.1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# After a normal build, we can specify the location of various outputs of the
# build. We put executables and static libraries inside the build directory in
# bin/ and lib/, respectively.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")

configure_file(src-trees/app/include/main.h.in include/main.h)

# add the library subdirectories
add_subdirectory(src-trees/helloworld)
add_subdirectory(src-trees/mymath)

# add the executable subdirectory
add_subdirectory(src-trees/app)
