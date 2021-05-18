#include "orderOfEllipticCurve.h"

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
            LongArithmetic::Number tmp("2");
            for (LongArithmetic::Number i("2"); i < num / i; i++) {
                if (num % i == tmp) {  // ÍÅ ÏÐÀÂÈËÜÍÀß ËÎÃÈÊÀ
                    return false;
                }
            }
        }
        return true;
    }
	void OrderOfEllipticCurve::initializePrimeNumbersVector() {

	}
   
}