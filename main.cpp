#include <iostream>
#include "matrix.h"

int main() {
    // Define 2x2 matrix A
    Matrix A({{6, 4}, {8, 3}});

    // Define 2x3 matrix B
    Matrix B({{1, 2, 3}, {4, 5, 6}});

    // Define 2x3 matrix C
    Matrix C({{2, 4, 6}, {1, 3, 5}});

    // Multiply matrix B by scalar 3 → B3
    Matrix B3 = B * 3;

    // Transpose matrix C → CT (3x2)
    Matrix CT = C.transpose();

    // Multiply B3 (2x3) * CT (3x2) → result is 2x2
    Matrix B3_CT = B3 * CT;

    // Add A + B3_CT → matrix D
    Matrix D = A + B3_CT;

    // Display the final matrix D
    std::cout << "Matrix D = A + (3B) * C^T:" << std::endl;
    D.print();

    return 0;
}
