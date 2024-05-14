#include <iostream>
#include <string>

class FractionNumber {

private:
	int* numerator;
	int* denominator;
	static int operationsCount;

public:

	//Consturctor with parameters
	FractionNumber(int num, int denom) : numerator(new int(num)), denominator(new int(denom)) {}

	//Copy constructor
	FractionNumber(const FractionNumber& otherFraction) : numerator(new int(*otherFraction.numerator)), denominator(new int(*otherFraction.denominator)) {}

	//Default Constructor
	FractionNumber() : FractionNumber(5, 9) {}

	//Destructor
	~FractionNumber() {
		delete numerator;
		delete denominator;
		std::cout << "Fraction object is being destroyed." << std::endl;
	}

	FractionNumber add(const FractionNumber& otherFraction) {
		int resultNum = *numerator * (*otherFraction.denominator) + (*otherFraction.numerator) * *denominator;
		int resultDenom = *denominator * (*otherFraction.denominator); 
		FractionNumber::operationsCount++;
		return FractionNumber(resultNum, resultDenom);
	}

	FractionNumber subtract(const FractionNumber& otherFraction) {
		int resultNum = *numerator * (*otherFraction.denominator) - (*otherFraction.numerator) * *denominator;
		int resultDenom = *denominator * (*otherFraction.denominator);
		FractionNumber::operationsCount++;
		return FractionNumber(resultNum, resultDenom);
	}

	FractionNumber multiply(const FractionNumber& otherFraction) {
		int resultNum = *numerator * (*otherFraction.numerator);
		int resultDenom = *denominator * (*otherFraction.denominator);
		FractionNumber::operationsCount++;
		return FractionNumber(resultNum, resultDenom);
	}

	FractionNumber divide(const FractionNumber& otherFraction) {
		int resultNum = *numerator * (*otherFraction.denominator);
		int resultDenom = *denominator * (*otherFraction.numerator);
		FractionNumber::operationsCount++;
		return FractionNumber(resultNum, resultDenom);
	}

	void display() {
		std::cout << *numerator << "/" << *denominator << std::endl;
	}


                                                    
	static void displayCount() {
		std::cout << "Number of Fraction objects created: " << operationsCount << std::endl;
	}

};

int FractionNumber::operationsCount = 0;