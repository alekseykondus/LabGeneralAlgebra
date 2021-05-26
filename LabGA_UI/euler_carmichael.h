#ifndef EULER_CARMICHAEL_H
#define EULER_CARMICHAEL_H

#include "Number.h"
#include "Calculator.h"

class Euler_Carmichael{
public:
    Euler_Carmichael();

    LongArithmetic::Number Euler_fuction(LongArithmetic::Number n);

    LongArithmetic::Number carmichael(LongArithmetic::Number n);

    void SetModul(const LongArithmetic::Number& modul);
private:
    LongArithmetic::Number ostacha(LongArithmetic::Number a, LongArithmetic::Number b, LongArithmetic::Number c);

    LongArithmetic::Number nsd(LongArithmetic::Number a, LongArithmetic::Number b);

    LongArithmetic::Calculator calculator;
};


#endif // EULER_CARMICHAEL_H
