#include <iostream>
#include "matrix.h"

int main() {
    Matrix A({{6, 4}, {8, 3}});
    Matrix B({{1, 2, 3}, {4, 5, 6}});
    Matrix C({{2, 4, 6}, {1, 3, 5}});

    Matrix B3 = B * 3;
    Matrix CT = C.transpose();
    Matrix B3_CT = B3 * CT;
    Matrix D = A + B3_CT;

    std::cout << "Matrix D = A + (3B) * C^T:" << std::endl;
    D.print();

    return 0;
}
