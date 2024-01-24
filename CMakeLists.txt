cmake_minimum_required(VERSION 3.15)
project(machin CXX)




add_library(machin src/machin.cpp)
target_include_directories(machin PUBLIC include)



set_target_properties(machin PROPERTIES PUBLIC_HEADER "include/machin.h")
install(TARGETS machin)
