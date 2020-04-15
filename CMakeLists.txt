cmake_minimum_required(VERSION 3.15)
project(lenguajes_programacion)

set(CMAKE_CXX_STANDARD 14)

include_directories(Tema_12)

add_executable(lenguajes_programacion
        Tema_12/testKS.cpp)
