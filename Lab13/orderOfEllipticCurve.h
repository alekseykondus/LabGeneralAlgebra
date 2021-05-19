#pragma once
#include "/PROJECTS/GA-Lab/LabGeneralAlgebra/lab11/EllipticCurve.h"

namespace OrderOfEllipticCurve {

	class OrderOfEllipticCurve {
	public:
		EllipticCurve mainEllipticCurve;
		std::vector<LongArithmetic::Number> primeNumbers;

		OrderOfEllipticCurve(const LongArithmetic::Number& a, const LongArithmetic::Number& b, const LongArithmetic::Number& mod);
		void initializePrimeNumbersVector();
		bool isPrime(const LongArithmetic::Number& mod);
		bool isPrime(const int mod);
	};

	class FrobeniusTrace {

	};

}