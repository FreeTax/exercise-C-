cmake_minimum_required(VERSION 3.16)
project(esercizio_6)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(esercizio_6
        main.cpp

        SurveillanceCamera.h
        SurveillanceCamera.cpp
        SurveillanceControl.h
        SurveillanceControl.cpp
        VideoStream.h
        VideoStream.cpp Observer.h Subject.h)
