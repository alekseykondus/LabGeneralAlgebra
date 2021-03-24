#pragma once

#include "Number.h"

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

		Number Modul(const Number& number);
		Number Inverse(const Number& number);

		void SetModulus(const Number& modulus);
	private:
		Number m_Modulus;
	};
}
