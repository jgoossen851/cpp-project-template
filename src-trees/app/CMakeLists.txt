cmake_minimum_required(VERSION 3.5.1)

set(SOURCE_FILES
    src/main.cpp
)

set(INCLUDE_FILES
)

# TODO Determine if quotes are recommended around variables
# TODO Set a variable to hold the target name
# Note: Adds executable at build/src-trees/app/ rather than at build/
add_executable(Template ${SOURCE_FILES} ${INCLUDE_FILES})

# TODO Describe the find_package options
#find_package(Eigen3 3.3 REQUIRED NO_MODULE)

# TODO Describe the difference between PUBLIC, PRIVATE, and INTERFACE
target_link_libraries(Template
    PUBLIC HelloWorld
    PRIVATE
)

# Also add the Binary include dir since we have the configured main.h header.
target_include_directories(Template
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
           ${PROJECT_BINARY_DIR}/include
)

