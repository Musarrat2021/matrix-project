#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matrix_c.h"

Matrix create_matrix(int rows, int cols, const int* values) {
    Matrix m;
    m.rows = rows;
    m.cols = cols;
    m.data = (int *)malloc(rows * cols * sizeof(int));

    if (values != NULL) {
        memcpy(m.data, values, rows * cols * sizeof(int));
    } else {
        for (int i = 0; i < rows * cols; i++) {
            m.data[i] = 0;
        }
    }
    return m;
}

Matrix scalar_multiply(Matrix m, int scalar) {
    Matrix result = create_matrix(m.rows, m.cols, NULL);
    for (int i = 0; i < m.rows * m.cols; i++) {
        result.data[i] = m.data[i] * scalar;
    }
    return result;
}

Matrix transpose(Matrix m) {
    Matrix result = create_matrix(m.cols, m.rows, NULL);
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            result.data[j * m.rows + i] = m.data[i * m.cols + j];
        }
    }
    return result;
}

Matrix multiply(Matrix a, Matrix b) {
    if (a.cols != b.rows) {
        printf("Matrix multiplication dimension mismatch!\n");
        exit(1);
    }

    Matrix result = create_matrix(a.rows, b.cols, NULL);

    for (int i = 0; i < a.rows; i++) {
        for (int j = 0; j < b.cols; j++) {
            int sum = 0;
            for (int k = 0; k < a.cols; k++) {
                sum += a.data[i * a.cols + k] * b.data[k * b.cols + j];
            }
            result.data[i * b.cols + j] = sum;
        }
    }

    return result;
}

Matrix add(Matrix a, Matrix b) {
    if (a.rows != b.rows || a.cols != b.cols) {
        printf("Matrix addition dimension mismatch!\n");
        exit(1);
    }

    Matrix result = create_matrix(a.rows, a.cols, NULL);
    for (int i = 0; i < a.rows * a.cols; i++) {
        result.data[i] = a.data[i] + b.data[i];
    }
    return result;
}

void print_matrix(Matrix m) {
    for (int i = 0; i < m.rows; i++) {
        for (int j = 0; j < m.cols; j++) {
            printf("%4d ", m.data[i * m.cols + j]);
        }
        printf("\n");
    }
}

void free_matrix(Matrix m) {
    free(m.data);
}
