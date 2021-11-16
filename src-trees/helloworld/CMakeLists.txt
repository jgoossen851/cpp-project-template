set(SRC_FILES src/helloworld.cpp)
set(INC_FILES include/helloworld.h)

add_library(HelloWorld STATIC "${SRC_FILES}" "${INC_FILES}")

target_include_directories(HelloWorld PUBLIC
                          "${PROJECT_SOURCE_DIR}/src-trees/helloworld/include"
                           )
