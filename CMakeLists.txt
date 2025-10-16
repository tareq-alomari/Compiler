cmake_minimum_required(VERSION 3.12)
project(MyCompiler VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(antlr_runtime)



file(GLOB_RECURSE ANTLR_GENERATED_SOURCES "src/generated/*.cpp")

add_executable(my_compiler
    src/main.cpp
    ${ANTLR_GENERATED_SOURCES}
)


target_include_directories(my_compiler PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/src/generated
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/src/include
)


target_link_libraries(my_compiler PRIVATE antlr4_static)

target_compile_definitions(my_compiler PRIVATE 
    PROJECT_SOURCE_DIR="${PROJECT_SOURCE_DIR}"
)
