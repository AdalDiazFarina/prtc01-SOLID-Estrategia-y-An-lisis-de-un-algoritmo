/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos 2021-2022
 *
 * @author Adal Díaz Fariña
 * @since Mar 1 2022
 * @desc Estrateguia hija de matrix
 *	     En este fichero se declara la clase hija de las matrices RowMatrix. Estas matrices a la hora de multiplicarlas se recorren por filas
 */

#pragma once
#include "../include/matrix.h"

class RowMatrix : public Matrix {
  public:
    RowMatrix();
    RowMatrix(int rows, int columns);
    ~RowMatrix();

    void Multiplication(Matrix matrix_b);
};