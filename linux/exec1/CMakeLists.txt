make_minimum_required(VERSION 3.10)

project(exec c)

Set(CMAKE_C_STANDARD 11)

add_executable(cmakeexec exec/execl.c exec/execv.c)

