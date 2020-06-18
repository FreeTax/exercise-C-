cmake_minimum_required(VERSION 3.16)
project(esame_mazzola)

set(CMAKE_CXX_STANDARD 14)

add_executable(esame_mazzola main.cpp DocumentElement.cpp DocumentElement.h ImageElement.cpp ImageElement.h TextElement.cpp TextElement.h LayoutElement.cpp LayoutElement.h)