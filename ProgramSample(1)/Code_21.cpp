#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Writing to a file
    std::ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "Hello, this is a C++ program for file I/O.\n";
        outFile << "Writing more text to the file." << std::endl;
        outFile.close();
        std::cout << "Data successfully written to example.txt" << std::endl;
    } else {
        std::cout << "Unable to open file for writing." << std::endl;
        return 1;
    }

    // Reading from a file
    std::string line;
    std::ifstream inFile("example.txt");
    if (inFile.is_open()) {
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    } else {
        std::cout << "Unable to open file for reading." << std::endl;
        return 1;
    }

    return 0;
}