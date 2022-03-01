/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos 2021-2022
 *
 * @author Adal Díaz Fariña
 * @since Mar 1 2022
 * @desc Estrateguia hija de Matrix
 *	     En este fichero se declara la clase hija de las matrices ColumnMatrix. Estas matrices a la hora de multiplicarlas se recorren por columnas
 */

#pragma once
#include "../include/matrix.h"

class ColumnMatrix : public Matrix {
  public: 
    ColumnMatrix();
    ColumnMatrix(int rows, int columns);
    ~ColumnMatrix();

    void Multiplication(Matrix matrix_b);
};