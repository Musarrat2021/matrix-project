#include <iostream>
#include "matrix.h"

// Constructor to create zero matrix
Matrix::Matrix(int r, int c) : rows(r), cols(c), data(r, std::vector<double>(c,0)) {}

// Constructor to initialize with provided data
Matrix::Matrix(const std::vector<std::vector<double>>& values) : data(values), rows(values.size()), cols(values[0].size()) {}
         

// Return the transpose of the matrix
Matrix Matrix::transpose() const {
    Matrix result(cols, rows);
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result.data[j][i] = data[i][j]; // Flip row and column
    return result;
}

// Matrix addition
Matrix Matrix::operator+(const Matrix& other) const {
    Matrix result(rows, cols);
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result.data[i][j] = data[i][j] + other.data[i][j];
    return result;
}

// Matrix multiplication
Matrix Matrix::operator*(const Matrix& other) const {
    Matrix result(rows, other.cols);
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < other.cols; ++j)
            for (int k = 0; k < cols; ++k)
                result.data[i][j] += data[i][k] * other.data[k][j];
    return result;
}


// Scalar multiplication
Matrix Matrix::operator*(double scalar) const {
    Matrix result(rows, cols);
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result.data[i][j] = data[i][j] * scalar;
    return result;
}


// Print matrix elements
void Matrix::display() const {
    for (const auto& row : data) {
        for (auto val : row)
            std::cout << val << "\t";
            std::cout << std::endl;
    }
}
