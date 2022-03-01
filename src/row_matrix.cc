/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos 2021-2022
 *
 * @author Adal Díaz Fariña
 * @since Mar 1 2022
 * @desc Estrateguia hija de matrix
 *	     En este fichero se define la clase hija de las matrices RowMatrix. Estas matrices a la hora de multiplicarlas se recorren por filas
 */

#pragma once
#include "../include/row_matrix.h"

RowMatrix::RowMatrix(): Matrix() {}
RowMatrix::RowMatrix(int rows, int columns): Matrix(rows, columns) {}
RowMatrix::~RowMatrix() {}

void RowMatrix::Multiplication(Matrix matrix_b) {
  if (GetNumberOfColumns() == matrix_b.GetNumberOfRows()) {
    std::vector<std::vector<int> > matrix(GetNumberOfRows(), std::vector<int>(matrix_b.GetNumberOfColumns(), 0));
    int value;
    double t0 = clock();
    for (int i = 0; i < GetNumberOfRows(); i++) {
      for (int j = 0; j < matrix_b.GetNumberOfColumns(); j++) {
        value = 0;
        for (int k = 0; k < matrix_b.GetNumberOfRows(); k++) {
          value += this->matrix_[i][k] * matrix_b(k, j);
        }
        matrix[i][j] = value;
      }
    }
    double t1 = clock();
    double time = (double(t1 - t0) / CLOCKS_PER_SEC);
    std::cout << "Time computed by rows " << time << "\n";
    matrix_ = matrix;
  } else {
    std::cout << "Error. These matrices can't be multiplied\n"; 
  }
}