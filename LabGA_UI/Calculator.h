#pragma once

#include "Number.h"
#include <map>

namespace LongArithmetic {
	class Calculator
	{
	public:
		Calculator(const Number& modulus);

		Number Remainder(const Number& left, const Number& right);
		Number Plus(const Number& left, const Number& right);
		Number Minus(const Number& left, const Number& right);
		Number Multiplication(const Number& left, const Number& right);
		Number Division(const Number& left, const Number& right);
		Number ModuloDivision(const Number& left, const Number& right);

		Number& Increment(Number& number);
		Number& Decrement(Number& number);

        Number montMult(Number a, Number b, Number mod);
        Number montPow(Number a, Number b, Number mod);

		Number Modul(const Number& number);

		Number Inverse(Number number);

        Number SqrtL(Number number);
        Number DiscretLog(Number& left, Number& right, Number& modul);

		void SetModulus(const Number& modulus);
		Number GetModulus() const;
	private:
		Number m_Modulus;
	};
}
