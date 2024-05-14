#include "include.h"

int main() {

	FractionNumber frac1;
	std::cout << "Fraction 1: ";
	frac1.display();

	FractionNumber frac2(1, 9);
	std::cout << "Fraction 2: ";
	frac2.display();

	FractionNumber frac3(frac2);
	std::cout << "Fraction 3: ";
	frac3.display();

	FractionNumber resultAdd = frac1.add(frac2);
	FractionNumber resultSubtract = frac1.subtract(frac2);
	FractionNumber resultMultiply = frac1.multiply(frac2);
	FractionNumber resultDivide = frac1.divide(frac2);
	FractionNumber resultDivide2 = frac1.divide(frac3);

	std::cout << "Fraction1 + Fraction2: ";
	resultAdd.display();
	std::cout << "Fraction1 - Fraction2: ";
	resultSubtract.display();
	std::cout << "Fraction1 * Fraction2: ";
	resultMultiply.display();
	std::cout << "Fraction1 / Fraction2: ";
	resultDivide.display();
	std::cout << "Fraction1 / Fraction3: ";
	resultDivide2.display();

	FractionNumber::displayCount();
	return 0;
}