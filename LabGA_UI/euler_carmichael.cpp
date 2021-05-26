#include "euler_carmichael.h"

    using namespace LongArithmetic;

    Euler_Carmichael::Euler_Carmichael() :
        calculator(LongArithmetic::Number("487")) {}

    LongArithmetic::Number Euler_Carmichael::Euler_fuction(LongArithmetic::Number n)
    {
        n = calculator.Modul(n);
        Number result = n;
        for (Number i = Number("2"); i * i <= n; i++)
            if (n % i == Number("0")) {
                while (n % i == Number("0"))
                    n = n/i;
                result = result - result / i;
            }
        if (n > Number("1"))
            result = result - result / n;
        return result;
    }

    LongArithmetic::Number Euler_Carmichael::carmichael(LongArithmetic::Number n) {
        n = calculator.Modul(n);
        Number k = Number("1");
        for (;; ) {
            int done = 1;
            for (Number x = Number("1"); x < n; x++) {
                if (nsd(x, n) == Number("1") && !(ostacha(x, k, n) == Number("1"))) {
                    done = 0;
                    k++;
                }
            }
            if (done) break;
        }
        return k;
    }

    void Euler_Carmichael::SetModul(const LongArithmetic::Number& modul){
        calculator.SetModulus(modul);
    }
    LongArithmetic::Number Euler_Carmichael::ostacha(LongArithmetic::Number a, LongArithmetic::Number b, Number c) {
        Number t = Number("1");
        for (Number e = Number("0"); e < b; e++) {
            t = (t * a) % c;
        }
        return t;
    }

    LongArithmetic::Number Euler_Carmichael::nsd(LongArithmetic::Number a, LongArithmetic::Number b) {
        Number t("0") ;
        while (!(b ==Number("0"))) {
            t = b;
            b = calculator.Remainder(a, b);
            a = t;
        }
        return a;
    }
