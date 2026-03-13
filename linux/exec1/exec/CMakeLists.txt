cmake_minimum_required(VERSION 3.10)

project(exec c)

Set(CMAKE_C_STANDARD 11)

add_executable(cmakeexec src/execl.c src/execv.c)
