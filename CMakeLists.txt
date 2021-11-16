cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(Template VERSION 0.1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# After a normal build, we can specify the location of various outputs of the
# build. We put executables and static libraries inside the build directory in
# bin/ and lib/, respectively.
# see https://cmake.org/cmake/help/latest/manual/cmake-buildsystem.7.html#output-artifacts
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/bin")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}/lib")


# add the external library subdirectories
add_subdirectory(exogenous)

# add the library subdirectories
add_subdirectory(src-trees/helloworld)
add_subdirectory(src-trees/mymath)

# add the executable subdirectory
add_subdirectory(src-trees/app)

# uninstall target (requires root)
if(NOT TARGET uninstall)
  configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/data/cmake_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
    IMMEDIATE @ONLY)

  add_custom_target(uninstall
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)
endif()

include(CTest)

# does the application run?
add_test(NAME Runs COMMAND Template 25)

# does the usage message work?
add_test(NAME Usage COMMAND Template)
set_tests_properties(Usage
  PROPERTIES PASS_REGULAR_EXPRESSION "Usage:.*name"
)

# define function to simplify adding tests
function(do_test target arg result)
  add_test(NAME Comp${arg} COMMAND ${target} ${arg})
  set_tests_properties(Comp${arg}
    PROPERTIES PASS_REGULAR_EXPRESSION ${result}
  )
endfunction()

# do a bunch of result based tests
do_test(Template Alpha "Welcome, Alpha!")
do_test(Template Bravo "Welcome, Bravo!")

# Create Package Installation Rules
include(InstallRequiredSystemLibraries)
set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/LICENSE")
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
include(CPack)
