#include "bidule.h"
#include <vector>
#include <string>

int main() {
    bidule();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    bidule_print_vector(vec);
}
