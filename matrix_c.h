#ifndef MATRIX_C_H
#define MATRIX_C_H

typedef struct {
    int rows;
    int cols;
    int* data;
} Matrix;

Matrix create_matrix(int rows, int cols, const int* values);
Matrix scalar_multiply(Matrix m, int scalar);
Matrix add(Matrix a, Matrix b);
Matrix multiply(Matrix a, Matrix b);
Matrix transpose(Matrix m);
void free_matrix(Matrix m);
void print_matrix(Matrix m);

#endif
