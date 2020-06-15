cmake_minimum_required(VERSION 3.8)
project(E10_Observer_exercise)

set(CMAKE_CXX_STANDARD 11)

add_executable(${PROJECT_NAME} main.cpp Observer.h Subject.h GameCharacter.cpp GameCharacter.h Display.h VideogameMapView.cpp VideogameMapView.h MiniMapView.cpp MiniMapView.h)