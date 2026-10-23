cmake_minimum_required(VERSION 3.30)
project(HelloWorldModules LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

add_compile_options(-fmodules-ts)

add_executable(HW HW.cpp)