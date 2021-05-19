#pragma once
#include <vector>
#include "Number.h"
#include <cmath>
using namespace LongArithmetic;
class Generators
{
public:
	static Number gcd(Number a, Number b);
	static std::vector<Number> generators( Number number, char op);
	static std::vector<Number> generators_test(Number number);
	static Number pow(Number a, Number b);
private:

};

