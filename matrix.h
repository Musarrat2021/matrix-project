#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

// Matrix class using std::vector for 2D data storage
class Matrix {
private:
    std::vector<std::vector<int>> data; // 2D vector for matrix elements

public:
    // Constructor to create a matrix of given size filled with zeros
    Matrix(int rows, int cols);

    // Constructor to initialize matrix from a 2D vector
    Matrix(std::vector<std::vector<int>> input);

    // Get number of rows
    int getRows() const;

    // Get number of columns
    int getCols() const;

    // Access (read/write) an element by reference
    int& at(int row, int col);

    // Access (read-only) an element by const reference
    const int& at(int row, int col) const;

    // Return the transpose of the matrix
    Matrix transpose() const;

    // Overload + to add matrices
    Matrix operator+(const Matrix& other) const;

    // Overload * to multiply matrices
    Matrix operator*(const Matrix& other) const;

    // Overload * to scale matrix with scalar value
    Matrix operator*(int scalar) const;

    // Print the matrix to standard output
    void print() const;
};

#endif
