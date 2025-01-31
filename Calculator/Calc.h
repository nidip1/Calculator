#pragma once
class Calc {
	double first;
	double second;

public:
	Calc(double a, double b) {
		first = a;
		second = b;
	}
	double add() {
		return first + second;
	}

	double mines() {
		first - second;
	}
};
