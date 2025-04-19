#include <stdio.h>
#include "matrix_c.h"

int main() {
    // 2x2 matrix A
    int a_data[4] = {6, 4, 8, 3};
    Matrix A = create_matrix(2, 2, a_data);
    printf("Matrix A:\n");
    print_matrix(A);

    // 2x3 matrix B
    int b_data[6] = {1, 2, 3, 4, 5, 6};
    Matrix B = create_matrix(2, 3, b_data);
    printf("Matrix B:\n");
    print_matrix(B);

    // 2x3 matrix C
    int c_data[6] = {2, 4, 6, 1, 3, 5};
    Matrix C = create_matrix(2, 3, c_data);
    printf("Matrix C:\n");
    print_matrix(C);

    // 3 * B
    Matrix B3 = scalar_multiply(B, 3);
    printf("3 * B:\n");
    print_matrix(B3);

    // Transpose of C
    Matrix CT = transpose(C);
    printf("Transpose of C (C^T):\n");
    print_matrix(CT);

    // Multiply B3 * CT
    Matrix product = multiply(B3, CT);
    printf("3B * C^T:\n");
    print_matrix(product);

    // Add A + (3B * C^T)
    Matrix result = add(A, product);
    printf("A + (3B * C^T):\n");
    print_matrix(result);

    // Free all
    free_matrix(A);
    free_matrix(B);
    free_matrix(C);
    free_matrix(B3);
    free_matrix(CT);
    free_matrix(product);
    free_matrix(result);

    return 0;
}
