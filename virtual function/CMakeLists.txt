cmake_minimum_required(VERSION 3.15)
project(virtual_function)

set(CMAKE_CXX_STANDARD 14)

add_executable(virtual_function main.cpp BaseClass.cpp BaseClass.h Derivate1.cpp Derivate1.h PrintFeature.cpp PrintFeature.h)