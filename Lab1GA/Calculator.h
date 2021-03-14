#pragma once

#include "Number.h"

namespace LongArithmetic {
	class Calculator
	{
	public:
		Calculator(const Number& number);

		bool Less(const Number& left, const Number& right);

		Number Plus(const Number& left, const Number& right);
		Number Minus(const Number& left, const Number& right);
		Number Multiplication(const Number& left, const Number& right);
		Number Division(const Number& left, const Number& right);

		Number Modul(const Number& number);
	private:
		Number m_Number;	//rename
	};
}
