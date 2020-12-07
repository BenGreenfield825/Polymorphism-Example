cmake_minimum_required(VERSION 3.14)
project(PolymorphismExample)

set(CMAKE_CXX_STANDARD 14)

add_executable(PolymorphismExample main.cpp Animal.h Dog.h)