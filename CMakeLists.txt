cmake_minimum_required(VERSION 3.30)
project(sudokuSolver)

set(CMAKE_CXX_STANDARD 23)
set(SRC src/main.cpp)

add_executable(sudokuSolver ${SRC})

target_compile_options(sudokuSolver PRIVATE -Werror -Wall -Wextra)