cmake_minimum_required(VERSION 3.5.1)

# Generate the Header file PrimeTable.h from a C++ program
# If it must be used by a different CMakeLists, use add_custom_target()
add_executable(MakePrimeTable src/makePrimeTable.cpp)

add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/PrimeTable.h
    COMMAND MakePrimeTable ${CMAKE_CURRENT_BINARY_DIR}/PrimeTable.h
    DEPENDS MakePrimeTable
)


# Set the CMake target name and files for this subdirectory
set(TARGET_NAME MyMath)

set(SOURCE_FILES
    src/mymath.cpp
)

set(INCLUDE_FILES
    include/mymath.h
    ${CMAKE_CURRENT_BINARY_DIR}/PrimeTable.h
)

# Create a new target with the source and header files as dependencies
add_library("${TARGET_NAME}" STATIC "${SOURCE_FILES}" "${INCLUDE_FILES}")

# The keywords PUBLIC, PRIVATE, and INTERFACE are used for both Include
# Directories and Link Libraries.
# * PUBLIC means that other libraries including or linking thistarget should
#   also include or link the listed directory.
# * PRIVATE means that this target must include or link the directory while
#   other libraries including or linking this target do not.
# * INTERFACE means that other libraries including or linking this target
#   should include or link the listed directory while this target does not.

# Specify include directories to use when compiling the given target
target_include_directories("${TARGET_NAME}"
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
)

# Find an externally provided package and load its package-specific details.
find_package(Eigen3 3.3 REQUIRED NO_MODULE)

# Specify libraries or flags to use when linking a given target and/or its dependents
target_link_libraries("${TARGET_NAME}"
    PRIVATE Eigen3::Eigen
)
