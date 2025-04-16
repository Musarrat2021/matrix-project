#include <stdio.h>
#include "matrix_c.h"


// Print a 2D matrix stored as a 1D array using pointer arithmetic
void printMatrix(int rows, int cols, int *matrix) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i * cols + j]);
        }
        printf("\n");
    }
}

// Multiply every element in matrix by scalar and store in result
void scalarMultiply(int rows, int cols, int *matrix, int scalar, int *result) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i * cols + j] = matrix[i * cols + j] * scalar;
}


// Transpose a matrix
void transposeMatrix(int rows, int cols, int *matrix, int *result) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[j * rows + i] = matrix[i * cols + j];
}



// Matrix multiplication
void multiplyMatrices(int r1, int c1, int *A, int r2, int c2, int *B, int *result) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i * c2 + j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i * c2 + j] += A[i * c1 + k] * B[k * c2 + j];
            }
        }
    }
}


// Add two matrices of the same dimensions
void addMatrices(int rows, int cols, int *A, int *B, int *result) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i * cols + j] = A[i * cols + j] + B[i * cols + j];
}
