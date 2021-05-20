//
// Created by andrew on 20.05.21.
//

#include "OrderOfElement.h"

namespace LongArithmetic {
    Number calcPower(const Number &bottom, const Number &top, const Number &modulo) {
        Number ZERO("0");
        Number ONE("1");

        Calculator calc(modulo);

        Number res(ONE);
        Number times(top);

        while (!(ZERO == times)) {
            res = calc.Multiplication(res, bottom);
            cout << "times:" << times.ToString() << endl;
            times = times - ONE;
        }

        cout << "times------" << calc.Modul(res).ToString() << endl;
        return calc.Modul(res);
    }

    Number find(const Number &n, const Number &a) {
        const Number one("1");
        Calculator calc(n);

        Factorization fact = Factorization();
        vector<Number> pe = fact.PrimeFactors(n);
        vector<Number> p = fact.NaiveFactorization(n);

        Number t(n);
        cout << t.ToString() << endl;
        int k = pe.size();

        Number a1("0");
        for(int i = 0; i < k; i++) {
            t = calc.Division(t, pe[i]);
            a1 = calcPower(a, t, n);

            while (!(a1 == one)) {
                a1 = calcPower(a1, p[i], n);
                t = calc.Multiplication(t, p[i]);
            }
        }
        return t;
    }
}