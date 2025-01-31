#include "Calc.h"
#include <iostream>
Calc::Calc(double a, double b) {
	first = a;
	second = b;
}

double Calc::add() {
	return first + second;
}

double Calc::mines() {
	return first - second;
}

double Calc::multiply() {
	return first * second;
}

double Calc::divide() {
	if (second == 0)
		std::cout << "На ноль делить нельзя" << std::endl;
	return first / second;
}