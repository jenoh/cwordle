cmake_minimum_required(VERSION 3.10)

# set the project name
project(wordle)

# add the executable
add_executable(wordle src/main.cpp src/Game.cpp )

# add include directories
include_directories(/usr/local/include)

file(COPY input DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

# add_subdirectory(input)/

# FileEmbedSetup()
# FileEmbedAdd(input/words.txt)