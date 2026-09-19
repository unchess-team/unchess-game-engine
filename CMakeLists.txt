cmake_minimum_required(VERSION 4.4.3)

project(unchess-game-engine
    VERSION 0.1.0
    DESCRIPTION "Unchess Game Engine"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(unchess-game-engine
    src/main.cpp
)