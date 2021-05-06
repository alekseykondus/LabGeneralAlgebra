#pragma once
#include <vector>
#include "Number.h"
using namespace LongArithmetic;
class Generators
{
public:
	Number gcd(Number a, Number b);
	std::vector<Number> generators( Number number);
private:

};

