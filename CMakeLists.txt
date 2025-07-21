cmake_minimum_required(VERSION 3.14)
project(TinySimEngine)

set(CMAKE_CXX_STANDARD 17)

# Source files
file(GLOB_RECURSE SOURCES src/*.cpp)

# Executable
add_executable(tinysim ${SOURCES})

# Include directories
target_include_directories(tinysim PRIVATE src include)

# Optional: Add SDL2
# find_package(SDL2 REQUIRED)
# target_include_directories(tinysim PRIVATE ${SDL2_INCLUDE_DIRS})
# target_link_libraries(tinysim PRIVATE ${SDL2_LIBRARIES})
