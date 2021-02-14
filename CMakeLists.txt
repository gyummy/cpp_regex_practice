cmake_minimum_required(VERSION 3.17)
project(cpp_regex_test)

set(CMAKE_CXX_STANDARD 14)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(cpp_regex_test main.cpp Pattern.cpp Pattern.h Matcher.cpp Matcher.h)