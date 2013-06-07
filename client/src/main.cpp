#include <iostream>
#include <cstdlib>
#include "bar.hpp"

int main(int argc, char* argv[]) {
    bar::say_stuff(std::cout);
    return EXIT_SUCCESS;
}
