#include <iostream>
#include <string>

int main() {
    std::string str;
    bool isPalindrome = true;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    int length = str.length();
    for (int i = 0; i < length / 2; ++i) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        std::cout << "\"" << str << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << str << "\" is not a palindrome." << std::endl;
    }
    return 0;
}