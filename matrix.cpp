#include <iostream>
#include "matrix.h"

// Constructor to create zero matrix
Matrix::Matrix(int rows, int cols) : data(rows, std::vector<int>(cols)) {}

// Constructor to initialize with provided data
Matrix::Matrix(std::vector<std::vector<int>> input) : data(std::move(input)) {}

int Matrix::getRows() const {
    return data.size();
}

int Matrix::getCols() const {
    return data[0].size();
}

// Access an element by reference for modification
int& Matrix::at(int row, int col) {
    return data[row][col];
}

// Access an element (read-only)
const int& Matrix::at(int row, int col) const {
    return data[row][col];
}

// Return the transpose of the matrix
Matrix Matrix::transpose() const {
    int rows = getCols();  // new number of rows
    int cols = getRows();  // new number of cols
    Matrix result(rows, cols);
    for (int i = 0; i < cols; ++i)
        for (int j = 0; j < rows; ++j)
            result.at(j, i) = at(i, j); // Flip row and column
    return result;
}

// Matrix addition
Matrix Matrix::operator+(const Matrix& other) const {
    int rows = getRows();
    int cols = getCols();
    Matrix result(rows, cols);
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result.at(i, j) = this->at(i, j) + other.at(i, j);
    return result;
}

// Matrix multiplication
Matrix Matrix::operator*(const Matrix& other) const {
    int r1 = getRows(), c1 = getCols(), c2 = other.getCols();
    Matrix result(r1, c2);
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            for (int k = 0; k < c1; ++k)
                result.at(i, j) += this->at(i, k) * other.at(k, j);
    return result;
}

// Scalar multiplication
Matrix Matrix::operator*(int scalar) const {
    int rows = getRows(), cols = getCols();
    Matrix result(rows, cols);
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result.at(i, j) = this->at(i, j) * scalar;
    return result;
}

// Print matrix elements
void Matrix::print() const {
    for (const auto& row : data) {
        for (int val : row)
            std::cout << val << "\t";
            std::cout << std::endl;
    }
}
