#pragma once

#include <vector>
#include <utility>
using namespace std;

#include "Calculator.h"

namespace LongArithmetic {
	class Factorization
	{
	public:

		const static pair<Number, Number> NO_FACTOR;

		Factorization();

		// return all factors
		vector<Number> NaiveFactorization(const Number& number);

		// return pair of factors
		pair<Number, Number> PollardRhoFactorization(const Number& number);

		// return all prime factors (with repeating if it exists)
		vector<Number> PrimeFactors(const Number& number);

	private:

		Calculator self_mod;
	};
}