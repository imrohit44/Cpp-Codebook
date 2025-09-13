#include <iostream>

int main() {
    int start, end;
    std::cout << "Enter the start of the range: ";
    std::cin >> start;
    std::cout << "Enter the end of the range: ";
    std::cin >> end;
    std::cout << "Prime numbers between " << start << " and " << end << " are:" << std::endl;
    for (int i = start; i <= end; ++i) {
        bool isPrime = true;
        if (i <= 1) {
            isPrime = false;
        } else {
            for (int j = 2; j <= i / 2; ++j) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}