#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

// Matrix class using std::vector for 2D data storage
class Matrix {
private:
    std::vector<std::vector<double>> data; // 2D vector for matrix elements
    int rows, cols;
public:
    // Constructor to create a matrix of given size filled with zeros
    Matrix(int rows, int cols);
    Matrix (const std::vector<std::vector<double>>& values);
    
    // Return the transpose of the matrix
    Matrix transpose() const;
    // Overload + to add matrices
    Matrix operator+(const Matrix& other) const;

    // Overload * to multiply matrices
    Matrix operator*(const Matrix& other) const;

    // Overload * to scale matrix with scalar value
    Matrix operator*(double scalar) const;

    // Print the matrix to standard output
    void display() const;
};

#endif
