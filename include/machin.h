#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define MACHIN_EXPORT __declspec(dllexport)
#else
  #define MACHIN_EXPORT
#endif

MACHIN_EXPORT void machin();
MACHIN_EXPORT void machin_print_vector(const std::vector<std::string> &strings);
