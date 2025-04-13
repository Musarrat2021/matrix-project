#ifndef MATRIX_C_H
#define MATRIX_C_H

#define ROWS_A 2
#define COLS_A 2
#define ROWS_B 2
#define COLS_B 3
#define ROWS_C 2
#define COLS_C 3

void printMatrix(int rows, int cols, int matrix[rows][cols]);
void scalarMultiply(int rows, int cols, int matrix[rows][cols], int scalar, int result[rows][cols]);
void transposeMatrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows]);
void multiplyMatrices(int r1, int c1, int m1[r1][c1], int r2, int c2, int m2[r2][c2], int result[r1][c2]);
void addMatrices(int rows, int cols, int m1[rows][cols], int m2[rows][cols], int result[rows][cols]);

#endif
