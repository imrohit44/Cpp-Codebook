#include <iostream>
#include <string>

int main() {
    std::string str;
    int vowelCount = 0;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    for (char ch : str) {
        switch (tolower(ch)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowelCount++;
                break;
        }
    }
    std::cout << "Number of vowels: " << vowelCount << std::endl;
    return 0;
}