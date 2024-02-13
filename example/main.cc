#include <iostream>
#include <string>
#include "lib/hello.h"

int main() {
    std::string name = "Mila";
    std::cout << say_hello(name) << std::endl;
    
    return 0;
}