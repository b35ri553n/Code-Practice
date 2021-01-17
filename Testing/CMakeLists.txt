# cmake_minimum_required(VERSION 3.19.2)

# set(This Example)

# project(${This} C CXX)

# set(CMAKE_C_STANDARD 99)
# set(CMAKE_CXX_STANDARD 11)
# set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++")

# enable_testing()

# add_subdirectory(googletest)

# set(Headers 
#     Example.hpp
# )

# set(Sources 
#     Example.cpp
# )

# add_library(${This} STATIC ${Sources} ${Headers})

# add_subdirectory(test)

cmake_minimum_required(VERSION 3.19.2) # version can be different

project(my_cpp_project) #name of your project

add_subdirectory(googletest) # add googletest subdirectory

include_directories(googletest/include) # this is so we can #include <gtest/gtest.h>

add_executable(mytests mytests.cpp) # add this executable

target_link_libraries(mytests PRIVATE gtest) # link google test to this executable