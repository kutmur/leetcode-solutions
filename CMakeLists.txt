cmake_minimum_required(VERSION 3.10)
project(LeetCodeSolutions)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(src)
include_directories(src/easy)
include_directories(src/medium)
include_directories(src/hard)

# Create a simple executable that demonstrates the repository structure
add_executable(leetcode_info src/main.cpp)

# Optional: Add compiler warnings
if(MSVC)
    target_compile_options(leetcode_info PRIVATE /W4)
else()
    target_compile_options(leetcode_info PRIVATE -Wall -Wextra -Wpedantic)
endif()

# Note: Individual solutions can be compiled by creating separate executables
# Example for problem 1:
# add_executable(problem_1 src/easy/S_1.cpp)
# target_link_libraries(problem_1)

