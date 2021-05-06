#include "generators.h"
using namespace LongArithmetic;
Number Generators::gcd(Number a, Number b) {
	if (a - (a / b) * b == Number("0"))
		return b;
	if (b - (b / a) * a == Number("0"))
		return a;
	if (a > b)
		return gcd(a - (a / b) * b, b);
	return gcd(a, b - (b / a) * a);
}
std::vector<Number> Generators::generators(Number number) {
	std::vector<Number> result;
	result.push_back(Number("1"));
	for (Number i = Number("2"); i < number; i++) {
		if (Generators::gcd(i,number) == Number("1")) {
			result.push_back(i);
			
		}
	}
	
	return result;
}