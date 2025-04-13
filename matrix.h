#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;

public:
    Matrix(int rows, int cols);
    Matrix(std::vector<std::vector<int>> input);
    int getRows() const;
    int getCols() const;
    int& at(int row, int col);
    const int& at(int row, int col) const;
    Matrix transpose() const;
    Matrix operator+(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;
    Matrix operator*(int scalar) const;
    void print() const;
};

#endif
