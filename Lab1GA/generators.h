#pragma once
#include <vector>
#include "Number.h"
using namespace LongArithmetic;
class Generators
{
public:
	static Number gcd(Number a, Number b);
	static std::vector<Number> generators( Number number);
private:

};

