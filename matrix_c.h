#ifndef MATRIX_H
#define MATRIX_H



// Print a matrix of size rows x cols
void printMatrix(int rows, int cols, int *matrix);

// Multiply a matrix by a scalar value
void scalarMultiply(int rows, int cols, int *matrix, int scalar, int *result);

// Transpose a matrix (flip rows and columns)
void transposeMatrix(int rows, int cols, int *matrix, int *result);

// Multiply two matrices A (r1 x c1) and B (r2 x c2)
void multiplyMatrices(int r1, int c1, int *A, int r2, int c2, int *B, int *result);

// Add two matrices of the same size
void addMatrices(int rows, int cols, int *A, int *B, int *result);

#endif
