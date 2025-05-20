cmake_minimum_required(VERSION 3.10)
project(CircuitSim)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include header files
include_directories(include)

# Source files
file(GLOB SOURCES
    src/*.cpp
)

# Output executable
add_executable(sim ${SOURCES})
