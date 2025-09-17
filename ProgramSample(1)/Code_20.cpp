#include <iostream>
#include <vector>

std::vector<long long> memo(100, -1);

long long fibonacci(int n) {
    if (memo[n] != -1) {
        return memo[n];
    }
    if (n <= 1) {
        return n;
    }
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main() {
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;
    if (n < 0) {
        std::cout << "Invalid input. Please enter a positive number." << std::endl;
    } else {
        std::cout << "Fibonacci Series: ";
        for (int i = 0; i < n; ++i) {
            std::cout << fibonacci(i) << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}