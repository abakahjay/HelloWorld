cmake_minimum_required(VERSION 4.2)
project(HelloWorld)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(HelloWorld
        src/main.cpp
        src/lessons/lesson_basics.cpp
        src/lessons/lesson_operators.cpp
        src/lessons/lesson_exercises.cpp
        src/lessons/lesson_data_types.cpp
        src/lessons/lesson_random.cpp
        src/lessons/lesson_loops.cpp
)

# Lets the sources include headers relative to src/ as well.
target_include_directories(HelloWorld PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
