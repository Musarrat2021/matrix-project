#include <iostream>
#include "matrix.h"

Matrix::Matrix(int rows, int cols) : data(rows, std::vector<int>(cols)) {}

Matrix::Matrix(std::vector<std::vector<int>> input) : data(std::move(input)) {}

int Matrix::getRows() const {
    return data.size();
}

int Matrix::getCols() const {
    return data[0].size();
}

int& Matrix::at(int row, int col) {
    return data[row][col];
}

const int& Matrix::at(int row, int col) const {
    return data[row][col];
}

Matrix Matrix::transpose() const {
    int rows = getCols();
    int cols = getRows();
    Matrix result(rows, cols);
    for (int i = 0; i < cols; ++i)
        for (int j = 0; j < rows; ++j)
            result.at(j, i) = at(i, j);
    return result;
}

Matrix Matrix::operator+(const Matrix& other) const {
    int rows = getRows();
    int cols = getCols();
    Matrix result(rows, cols);
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result.at(i, j) = this->at(i, j) + other.at(i, j);
    return result;
}

Matrix Matrix::operator*(const Matrix& other) const {
    int r1 = getRows(), c1 = getCols(), c2 = other.getCols();
    Matrix result(r1, c2);
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j)
            for (int k = 0; k < c1; ++k)
                result.at(i, j) += this->at(i, k) * other.at(k, j);
    return result;
}

Matrix Matrix::operator*(int scalar) const {
    int rows = getRows(), cols = getCols();
    Matrix result(rows, cols);
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result.at(i, j) = this->at(i, j) * scalar;
    return result;
}

void Matrix::print() const {
    for (const auto& row : data) {
        for (int val : row)
            std::cout << val << "\t";
        std::cout << std::endl;
    }
}
