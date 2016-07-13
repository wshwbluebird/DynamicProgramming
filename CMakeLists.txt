cmake_minimum_required(VERSION 3.5)
project(DynamicProgramming)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ReviewMemRecursive.cpp DAG_nestinfRectangle.cpp Coin.cpp 01Package.cpp HappyJinming.cpp caiyao.cpp)
add_executable(DynamicProgramming ${SOURCE_FILES})