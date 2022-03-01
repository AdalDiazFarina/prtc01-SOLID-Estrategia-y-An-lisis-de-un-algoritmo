/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos 2021-2022
 *
 * @author Adal Díaz Fariña
 * @since Mar 1 2022
 * @desc Estrateguia base de las matrices
 *			 En este fichero se define la clase base de las matrices
 */

#pragma once;
#include "../include/matrix.h"
#include <ctime>
#include <cstdlib>

// Constructors
// This is the default constructor
Matrix::Matrix() {}

// This constructor generate a random matrix with the dimension that we stipulated
Matrix::Matrix(int rows, int columns) {
  rows_ = rows;
  columns_ = columns;
  int value;
  std::vector<int> row;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      row.push_back(rand()%10);
    }
    matrix_.push_back(row);
    row.clear();
  }
}

// Destructor
Matrix::~Matrix() {}

// Getters
// This method return the number of rows of the matrix
int Matrix::GetNumberOfRows() {
	return rows_;
}

// This method return the number of column of the matrix	
int Matrix::GetNumberOfColumns() {
	return columns_;
}

void Matrix::Multiplication(Matrix matrix_b) {};

// Overload operator
// This operator let me ask for one item of the matrix 
int Matrix::operator()(int &i, int &j) {
	return matrix_[i][j];
}

// This operator show me the current matrix
std::ostream& operator<<(std::ostream& os, Matrix &matrix) {
	for (int i = 0; i < matrix.GetNumberOfRows(); i++) {
    for (int j = 0; j < matrix.GetNumberOfColumns(); j++) {
      os << matrix(i, j) << " ";
    }
		os << "\n";
  }
	return os;
}