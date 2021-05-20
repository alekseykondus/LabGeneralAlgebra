#include "generators.h"
#include "../lab7/OrderOfElement.h"
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
Number Generators::pow(Number a, Number b) {
	Number res("1");
	for (int i = 0; i < std::stoi(b.ToString()); i++) {
		res = res * a;
	}
	return res;
}
std::vector<Number> Generators::prime_numbers(const Number& number) {
	std::vector<Number> result;
	result.push_back(Number("1"));
	for (Number i = Number("2"); i < number; i++) {
		if (Generators::gcd(i,number) == Number("1")) {
			result.push_back(i);
				
		}
	}
	
	return result;
}
std::vector<Number> Generators::generators(const Number& number,char op) {
	std::vector<Number> order;
	std::vector<Number> generators_vector;
	std::vector<Number> result = prime_numbers(number);
	Calculator calc(number);
	/*result.push_back(Number("1"));
	for (Number i = Number("2"); i < number; i++) {
		if (Generators::gcd(i, number) == Number("1")) {
			result.push_back(i);

		}
	}*/
	Number val = Number("0");
	for (std::vector<int>::size_type i = 0;i < result.size();i++) {
		Number temp = Number("1");
		
		while (true) {
		if (op == '+') {
			return result;
		}
		else if (op == '*')
		{
			//val % number
				val = pow(result[i],temp);
				if (calc.Remainder(val,number) == Number("1")) {
					order.push_back(temp);
					//std::cout << order[i].ToString() << ' ';
					break;
				}
				
			}
		temp++;
		}
		
	}
	//return order;
	
	//Number count = Number("0");
	
	bool cyclic = false;
	for (std::vector<int>::size_type i = 0;i < order.size();i++) {
		if (order[i] == Number(std::to_string(order.size()))) {
			generators_vector.push_back(result[i]);
			cyclic = true;
			//count++;
		}
	}
	if (cyclic) {
		/*std::cout << count.ToString() << ' ';
		for (std::vector<int>::size_type i = 0;i < generators_vector.size();i++) {
			std::cout << generators_vector[i].ToString() << ' ';
			}*/

		return generators_vector;

	}
	else std::cout << "The group is not a cyclic group " << std::endl;
}