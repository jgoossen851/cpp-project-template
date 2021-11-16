cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(Template VERSION 0.1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

configure_file(src-trees/app/include/main.h.in main.h)

# add the HelloWorld library
add_subdirectory(src-trees/helloworld)

# add the executable
add_executable(Template src-trees/app/src/main.cpp)

target_link_libraries(Template PUBLIC HelloWorld)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(Template PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           "${PROJECT_SOURCE_DIR}/src-trees/helloworld"
                           )

