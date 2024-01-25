cmake_minimum_required(VERSION 3.15)
project(bidule CXX)




add_library(bidule src/bidule.cpp)
target_include_directories(bidule PUBLIC include)



set_target_properties(bidule PROPERTIES PUBLIC_HEADER "include/bidule.h")
install(TARGETS bidule)
