cmake_minimum_required(VERSION 3.6)
project(adaboost_project)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES adaboost.cpp)
add_executable(adaboost_run ${SOURCE_FILES})