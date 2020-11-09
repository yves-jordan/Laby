cmake_minimum_required(VERSION 2.6)
project(Laby)


set(CMAKE_BUILD_TYPE debug)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++11")


file(
GLOB_RECURSE
source_files
src/*.cpp)


add_executable(Laby
${source_files}
)
