//
// Created by andrew on 20.05.21.
//

#include "OrderOfElement.h"

namespace LongArithmetic {
    Number calcPower(const Number &bottom, const Number &top, const Number &modulo) {
        Calculator calc(modulo);

        Number res(ONE);
        Number times(top);

        while (!(times == ZERO)) {
            res = calc.Multiplication(res, bottom);
            times = calc.Minus(times, ONE);
        }

        return res;
    }

    Number find(const Number &n, const Number &a) {
        const Number one("1");
        Calculator calc(n);

        Factorization fact = Factorization();
        vector<Number> p = fact.PrimeFactors(n);

        Number t = Number(n);
        int k = p.size();

        Number a1("0");
        for(int i = 0; i < k; i++) {
            t = calc.Division(t, p[i]);
            a1 = calcPower(a, t, n);

            while (!(a1 == one)) {
                a1 = calcPower(a1, p[i], n);
                t = calc.Multiplication(t, p[i]);
            }
        }

        return t;
    }
}