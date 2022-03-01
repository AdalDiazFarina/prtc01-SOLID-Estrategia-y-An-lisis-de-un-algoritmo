/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos 2021-2022
 *
 * @author Adal Díaz Fariña
 * @since Mar 1 2022
 * @desc Esta es la clase context
 *	     En este fichero se declara la clase context
 */
 
#pragma once
#include <iostream>
#include "../include/row_matrix.h"
#include "../include/column_matrix.h"
#include "../include/matrix.h"

enum TYPESTRATEGY{R, C};

class Context {
  protected:
		Matrix *strategy_;
  public:
		Context();
		Context(Matrix *strategy);
		~Context();
		void SetStrategy(TYPESTRATEGY type, int i, int j);
		void SetStrategy(Matrix *strategy);
		void Multiplication(Matrix matrix);

		friend std::ostream& operator<<(std::ostream& os, Context &context);
};