#include <iostream>
#include "matrix.h"

int main() {
    // Define 2x2 matrix A
    Matrix A({{6, 4}, {8, 3}});
    std::cout << "Matrix A:\n";
    A.display();

    // Define 2x3 matrix B
    Matrix B({{1, 2, 3}, {4, 5, 6}});
    std::cout << "Matrix B:\n";
    B.display();

    // Define 2x3 matrix C
    Matrix C({{2, 4, 6}, {1, 3, 5}});
    std::cout << "Matrix C:\n";
    C.display();

    // Compute 3 * B
    Matrix B3 = B * 3;
    std::cout << "3 * B:\n";
    B3.display();

    // Compute C transpose
    Matrix CT = C.transpose();
    std::cout << "Transpose of C (C^T):\n";
    CT.display();

    // Multiply B3 with CT
    Matrix product = B3 * CT;
    std::cout << "3B * C^T:\n";
    product.display();

    // Add A + (3B * CT)
    Matrix result = A + product;
    std::cout << "\nA + (3B * C^T):\n";
    
    // Display final result
    result.display();

    return 0;
}
