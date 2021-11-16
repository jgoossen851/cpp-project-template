cmake_minimum_required(VERSION 3.5.1)

set(SOURCE_FILES
    src/mymath.cpp
)

set(INCLUDE_FILES
    include/mymath.h
)

add_library(MyMath STATIC "${SOURCE_FILES}" "${INCLUDE_FILES}")

find_package(Eigen3 3.3 REQUIRED NO_MODULE)

target_link_libraries(MyMath
    PUBLIC
    PRIVATE Eigen3::Eigen
)

target_include_directories(MyMath
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

