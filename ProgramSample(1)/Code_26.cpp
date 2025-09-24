#include <iostream>

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3];
    std::cout << "Matrix A:\n";
    for(int i=0; i<3; ++i) {
        for(int j=0; j<3; ++j) {
            std::cout << A[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "\nMatrix B:\n";
    for(int i=0; i<3; ++i) {
        for(int j=0; j<3; ++j) {
            std::cout << B[i][j] << " ";
        }
        std::cout << std::endl;
    }
    // Multiply A and B
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    std::cout << "\nResultant Matrix C (A * B):\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}