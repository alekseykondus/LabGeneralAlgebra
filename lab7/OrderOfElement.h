
#ifndef ZA_LABA_ORDEROFELEMENTFINDER_H
#define ZA_LABA_ORDEROFELEMENTFINDER_H

#include <vector>
using namespace std;

#include "../Lab1GA/Number.h"
#include "../Lab1GA/Factorization.h"


namespace LongArithmetic {
    const Number ZERO("0");
    const Number ONE("1");

    Number calcPower(const Number &bottom, const Number &top,  const Number &modulo);

    Number find(const Number &n, const Number &a);


}




#endif //ZA_LABA_ORDEROFELEMENTFINDER_H
