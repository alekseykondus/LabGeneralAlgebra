#include "orderOfEllipticCurve.h"

namespace OrderOfEllipticCurve {

	OrderOfEllipticCurve::OrderOfEllipticCurve(const LongArithmetic::Number& a, const LongArithmetic::Number& b, const LongArithmetic::Number& mod) : mainEllipticCurve(a, b, mod) {
		mainEllipticCurve.a = a;
		mainEllipticCurve.b = b;
		mainEllipticCurve.Modul = mod;
	}

	void OrderOfEllipticCurve::initializePrimeNumbersVector() {

	}

}