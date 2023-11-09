cmake_minimum_required(VERSION 3.26)
project(Figures)

set(CMAKE_CXX_STANDARD 17)

add_executable(Figures main.cpp
        Figure.cpp
        Figure.h
        Circle.cpp
        Circle.h
        Rectangle.cpp
        Rectangle.h
        Ellipse.cpp
        Ellipse.h
        Triangle.cpp
        Triangle.h)
