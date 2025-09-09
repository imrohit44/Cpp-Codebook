#include <iostream>

int main() {
    int number, reversed_number = 0, remainder;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    while (number != 0) {
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }
    std::cout << "Reversed number = " << reversed_number << std::endl;
    return 0;
}