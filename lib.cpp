#include <cstdlib>
#include "lib.h"

char* build_number_char = std::getenv("TRAVIS_BUILD_NUMBER");
int build_number = std::atoi(build_number_char);