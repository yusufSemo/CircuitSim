cmake_minimum_required(VERSION 3.10)
project(CircuitSim)

set(CMAKE_CXX_STANDARD 17)

# Include headers
include_directories(include)

# Find all .cpp files in src/
file(GLOB SOURCES "src/*.cpp")

# Create executable
add_executable(CircuitSim ${SOURCES})
