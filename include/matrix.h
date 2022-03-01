/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos 2021-2022
 *
 * @author Adal Díaz Fariña
 * @since Mar 1 2022
 * @desc Estrateguia base de las matrices
 *			 En este fichero se declara la clase base de las matrices
 */

#pragma once
#include <iostream>
#include <fstream>
#include <math.h>
#include <vector>

/**
class Matrix atributtes:
- rows_: Number of rows that the matrix have
- columns_ : Number of columns that the matrix have
- matrix_ : vector of integer vectors that represent the current matrix
*/
class Matrix {
  protected:
    int rows_;
    int columns_;
		std::vector<std::vector<int> > matrix_;
  public:
		// Constructors
		Matrix();
		Matrix(int rows, int columns);
		// Destructor
		~Matrix();

		//Getters
		int GetNumberOfRows();
		int GetNumberOfColumns();

		virtual void Multiplication(Matrix matrix_b);
		// Overload operator
		int operator()(int &i, int &j);
		friend std::ostream& operator<<(std::ostream& os, Matrix &matrix);
};