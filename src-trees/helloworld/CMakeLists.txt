cmake_minimum_required(VERSION 3.5.1)

# Set the CMake target name and files for this subdirectory
set(TARGET_NAME HelloWorld)

set(SOURCE_FILES
    src/helloworld.cpp
)

set(INCLUDE_FILES
    include/helloworld.h
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
)

# Specify libraries or flags to use when linking a given target and/or its dependents
target_link_libraries("${TARGET_NAME}"
    PRIVATE AnsiEscape
)
