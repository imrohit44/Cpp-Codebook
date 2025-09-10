#include <iostream>

int main() {
    int a = 10, b = 20;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    return 0;
}