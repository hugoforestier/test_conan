#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define BIDULE_EXPORT __declspec(dllexport)
#else
  #define BIDULE_EXPORT
#endif

BIDULE_EXPORT void bidule();
BIDULE_EXPORT void bidule_print_vector(const std::vector<std::string> &strings);
