// Write a program to implement the matrix ADT using a class. The operations supported by this ADT are:
// a) Addition of two matrices. b) subtraction of two matrices. c) Multiplication of two matrices. 

#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int mat[10][10];  // Assuming a maximum size of 10x10

public:
    // Constructor
    Matrix(int r = 0, int c = 0) {
        rows = r;
        cols = c;
    }

    // Method to input matrix elements
    void inputMatrix() {
        cout << "Enter elements for " << rows << "x" << cols << " matrix:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }

    // Method to display matrix
    void displayMatrix() const {
        cout << "Matrix:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Matrix Addition
    Matrix add(const Matrix& m) {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.mat[i][j] = mat[i][j] + m.mat[i][j];
        return result;
    }

    // Matrix Subtraction
    Matrix subtract(const Matrix& m) {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result.mat[i][j] = mat[i][j] - m.mat[i][j];
        return result;
    }

    // Matrix Multiplication
    Matrix multiply(const Matrix& m) {
        Matrix result(rows, m.cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < m.cols; j++) {
                result.mat[i][j] = 0;
                for (int k = 0; k < cols; k++)
                    result.mat[i][j] += mat[i][k] * m.mat[k][j];
            }
        return result;
    }
};

int main() {
    int r1, c1, r2, c2;
    
    // Input for first matrix
    cout << "Enter rows and columns for Matrix-1: ";
    cin >> r1 >> c1;
    Matrix mat1(r1, c1);
    mat1.inputMatrix();

    // Input for second matrix
    cout << "Enter rows and columns for Matrix-2: ";
    cin >> r2 >> c2;
    Matrix mat2(r2, c2);
    mat2.inputMatrix();

    // Perform Addition (if possible)
    if (r1 == r2 && c1 == c2) {
        Matrix sum = mat1.add(mat2);
        cout << "\nMatrix Addition Result:\n";
        sum.displayMatrix();
    } else {
        cout << "\nAddition not possible (dimension mismatch)\n";
    }

    // Perform Subtraction (if possible)
    if (r1 == r2 && c1 == c2) {
        Matrix diff = mat1.subtract(mat2);
        cout << "\nMatrix Subtraction Result:\n";
        diff.displayMatrix();
    } else {
        cout << "\nSubtraction not possible (dimension mismatch)\n";
    }

    // Perform Multiplication (if possible)
    if (c1 == r2) {
        Matrix prod = mat1.multiply(mat2);
        cout << "\nMatrix Multiplication Result:\n";
        prod.displayMatrix();
    } else {
        cout << "\nMultiplication not possible (column-row mismatch)\n";
    }

    return 0;
}