cmake_minimum_required(VERSION 3.9)

# Find the Doxygen package
# Require dot, treat the other components as optional
find_package(Doxygen
             REQUIRED dot
             OPTIONAL_COMPONENTS mscgen dia)

# Add Doxygen documentation
# set(DOXYGEN_USE_STAMP_FILE YES) # CMake 3.16
set(DOXYGEN_SOURCE_BROWSER  YES)
set(DOXYGEN_EXTRACT_ALL     YES)
set(DOXYGEN_FULL_PATH_NAMES NO)
doxygen_add_docs(
    docs
    ${PROJECT_SOURCE_DIR}
    COMMENT "Generate documentation"
)
