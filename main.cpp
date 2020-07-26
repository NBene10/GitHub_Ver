#include <iostream>

void greet(const std::string& name){
    std::cout << "Hello " << name << "!!!" << std::endl;
}

int main() {
    greet("Niccolò");
    return 0;
}
