cmake_minimum_required(VERSION 3.0)

set(CMAKE_C_STANDAD 17)
set(CMAKE_THREAD_PREFER THREADS)
project(threads)

add_executable(threads src/main.c)