#include <iostream>
#include "orderOfEllipticCurve.h"
#include "/PROJECTS/GA-Lab/LabGeneralAlgebra/Lab1GA/Number.h"

void scenario(OrderOfEllipticCurve::OrderOfEllipticCurve& core) {
    core.chooseM();
    LongArithmetic::Number tmp(core.babyGiant());
    /*while (tmp.GetDigits().size() == 0 || tmp.GetDigits()[0] == 0) {
        tmp.SetDigits(core.babyGiant().GetDigits());
    }*/
    for (int i = 0; i < tmp.GetDigits().size(); i++) {
        std::cout << tmp.GetDigits()[i];
    }
}

int main()
{   
    std::cout << "Input a: ";
    std::string buffer = "";
    std::cin >> buffer;
    LongArithmetic::Number a(buffer);
    std::cout << "Input b: ";
    std::cin >> buffer;
    LongArithmetic::Number b(buffer);
    std::cout << "Input modul: ";
    std::cin >> buffer;
    LongArithmetic::Number modul(buffer);
    OrderOfEllipticCurve::OrderOfEllipticCurve core(a, b, modul);
    while (!core.isPrime(modul)) {
        std::cout << "Modul is not a prime number, try again please: ";
        std::cin >> buffer;
        modul = buffer;
        core.mainEllipticCurve.setModul(modul);
    }
    scenario(core);

    return 0;
}