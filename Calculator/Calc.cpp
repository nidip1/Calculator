#include "Calc.h"

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
	return first / second;
}