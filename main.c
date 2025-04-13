#include <stdio.h>
#include "matrix_c.h"

int main() {
    int A[2][2] = {{6, 4}, {8, 3}};
    int B[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int C[2][3] = {{2, 4, 6}, {1, 3, 5}};
    
    int B3[2][3];
    scalarMultiply(2, 3, B, 3, B3);

    int CT[3][2];
    transposeMatrix(2, 3, C, CT);

    int B3_times_CT[2][2];
    multiplyMatrices(2, 3, B3, 3, 2, CT, B3_times_CT);

    int D[2][2];
    addMatrices(2, 2, A, B3_times_CT, D);

    printf("Matrix D = A + (3B) * C^T:\n");
    printMatrix(2, 2, D);

    return 0;
}
