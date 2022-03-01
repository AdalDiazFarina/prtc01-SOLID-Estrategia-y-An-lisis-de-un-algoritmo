/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Diseño y Análisis de Algoritmos 2021-2022
 *
 * @author Adal Díaz Fariña
 * @since Mar 1 2022
 * @desc Esta es la clase context
 *	     En este fichero se define la clase context
 */

#include "../include/matrix.h"
#include "../include/context.h"

Context::Context() {}

Context::Context(Matrix *strategy) {
  strategy_ = strategy;
}

Context::~Context() {
	delete strategy_;
}

void Context::SetStrategy(TYPESTRATEGY type, int i, int j) {
  delete strategy_;
	if (type == R) {
		strategy_ = new RowMatrix(i, j);
	} else if (type == C) {
		strategy_ = new ColumnMatrix(i, j);
	} else {
		std::cout << "Error. Strategy not know \n";
		strategy_ = NULL;
	}
}

void Context::SetStrategy(Matrix *strategy) {
	delete strategy_;
	strategy_ = strategy_;
}

void Context::Multiplication(Matrix matrix) {
	if (strategy_) {
		strategy_ -> Multiplication(matrix);
	}
}

std::ostream& operator<<(std::ostream& os, Context &context) {
	os << *(context.strategy_) << std::endl;
	return os;
}