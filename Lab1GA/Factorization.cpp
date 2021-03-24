#include "Factorization.h"

namespace LongArithmetic {
	const pair<Number, Number> Factorization::NO_FACTOR = make_pair(Number("0"), Number("0"));

	// only for creating calculator object - it will be updated after all function calling
	Factorization::Factorization() : self_mod(Calculator(Number("1"))) {}

	vector<Number> Factorization::NaiveFactorization(const Number& number)
	{
		vector<Number> factor_list = vector<Number>(0);

		// may be optimized with 4 lab var - calc sqrt(number) once time and don't calculate on each iteration
		for (Number i = Number("2"); /*at this place -> */ i * i <= number; i++)
		{
			// this can be changed at ((number % i) == 0) (don't realized at 1st var)
			if (/*at this place ->*/((number / i) * i) == number)
			{
				factor_list.push_back(i);
			}
		}

		return factor_list;
	}
}