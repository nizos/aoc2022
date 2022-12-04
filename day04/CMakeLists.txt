# set cmake minimum version
cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(AOCProject VERSION 1.0)

# enable testing frameworks (after project() declaration)
enable_testing()

# specify the tests to be performed (and output)
add_test(NAME AOCTest
        COMMAND runTests --gtest_output=xml:report.xml)

# include and link source folder
include_directories(src)
link_directories(src)

# add the executable
add_executable(main src/main.cpp)

# add add library
add_library(Solution src/Solution.cpp)

# link the library
target_link_libraries(main Solution)

# locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# link tests with what we want to test and the GoogleTest and pthread libraries
add_executable(runTests tests/tests.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# make release the default build
if(NOT CMAKE_BUILD_TYPE)
 set(CMAKE_BUILD_TYPE Build)
 message(STATUS "Build type not specified: Use Release by default")
endif()

set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
