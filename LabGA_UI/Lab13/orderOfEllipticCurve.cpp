#include "orderOfEllipticCurve.h"
#include <math.h>

namespace OrderOfEllipticCurve {

	OrderOfEllipticCurve::OrderOfEllipticCurve(const LongArithmetic::Number& a, const LongArithmetic::Number& b, const LongArithmetic::Number& mod) : mainEllipticCurve(a, b, mod) {
        mainEllipticCurve.setA(a);
        mainEllipticCurve.setB(b);
        mainEllipticCurve.setModul(mod);
	}
    bool OrderOfEllipticCurve::isPrime(const LongArithmetic::Number& num)
    {
        if (num.GetDigits().size() == 1 && (num.GetDigits().at(0) == 0 || num.GetDigits().at(0) == 1)) {
            return false;
        }
        else {
            LongArithmetic::Number tmp("0");
            LongArithmetic::Number temp("2");
            for (LongArithmetic::Number i("2"); i <= num / temp; ++i) {
                if (num % i == tmp) {
                    return false;
                }
            }
        }
        return true;
    }
    bool OrderOfEllipticCurve::isPrime(const int mod)
    {
        if (mod == 0 || mod == 1) {
            return false;
        }
        else {
            for (int i = 2; i <= mod / 2; ++i) {
                if (mod % i == 0) {
                    return false;
                }
            }
        }
        return true;
    }
	void OrderOfEllipticCurve::initializePrimeNumbersVector() {
        // Простое число не равно модулю
        double MUL = 2;
        for (int i = 3; MUL < 4 * sqrt(mainEllipticCurve.Modul().GetDigits()[0]); i++) {
            if (isPrime(i)) {
                std::string  buff = std::to_string(i);
                LongArithmetic::Number j(buff);
                primeNumbers.push_back(j);
                MUL = MUL * i;
            }
        }
        std::cout << "***************Prime Numbers Vector S***************" << std::endl;
        for (int i = 0; i < primeNumbers.size(); i++) {
            for (int j = 0; j < primeNumbers[i].GetDigits().size(); j++) {
                std::cout << primeNumbers[i].GetDigits()[j] << " ";
            }
        }
        std::cout << "*****************************************************" << std::endl;
       /* for (int i = 0; i < core.primeNumbers.size(); i++) {
            for (int j = 0; j < core.primeNumbers[i].GetDigits().size(); j++)
                std::cout << core.primeNumbers[i].GetDigits()[j] << ", ";
        }*/
	} 
}