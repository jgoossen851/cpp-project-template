cmake_minimum_required(VERSION 3.5.1)

# Set the CMake target name and files for this subdirectory
set(TARGET_NAME AnsiEscape)

# Create a new target with the source and header files as dependencies
add_library("${TARGET_NAME}" INTERFACE)

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
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/ansi-escape/include/srilakshmikanthanp
)
