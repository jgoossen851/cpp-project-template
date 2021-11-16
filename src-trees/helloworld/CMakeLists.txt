cmake_minimum_required(VERSION 3.5.1)

set(SOURCE_FILES
    src/helloworld.cpp
)

set(INCLUDE_FILES
    include/helloworld.h
)

add_library(HelloWorld STATIC "${SOURCE_FILES}" "${INCLUDE_FILES}")

#find_package(Eigen3 3.3 REQUIRED NO_MODULE)

#target_link_libraries(HelloWorld
#    PUBLIC
#    PRIVATE
#)

target_include_directories(HelloWorld
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
)

