#include <iostream>

int main() {
    int n, t1 = 0, t2 = 1, next_term = 0;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;
    std::cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
    for (int i = 3; i <= n; ++i) {
        next_term = t1 + t2;
        std::cout << next_term << ", ";
        t1 = t2;
        t2 = next_term;
    }
    std::cout << std::endl;
    return 0;
}