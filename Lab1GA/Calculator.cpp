#include "Calculator.h"

namespace LongArithmetic {
    Calculator::Calculator(const Number& modulus) :
        m_Modulus("0") {
        SetModulus(modulus);
    }
    
    Number Calculator::Remainder(const Number& left, const Number& right) {
        Number result(left -  ((left / right) * right));
        if (result.GetSign() == Number::Sign::Minus) result = result + right;
        return result;
    }

    Number Calculator::Plus(const Number& left, const Number& right) {
        return Modul(left + right);
    }

    Number Calculator::Minus(const Number& left, const Number& right) {
        return Modul(left - right);
    }

    Number Calculator::Multiplication(const Number& left, const Number& right) {
        return Modul(left * right);
    }

    Number Calculator::Division(const Number& left, const Number& right) {
        return Modul(left / right);
    }

    Number Calculator::Modul(const Number& number) {
        if (number > m_Modulus || number == m_Modulus)
            return Remainder(number, m_Modulus);
        else if (number.GetSign() == Number::Sign::Minus) {
            Number result(number + ((-(number / m_Modulus)) * m_Modulus));
            if (result.GetSign() == Number::Sign::Minus) result = result + m_Modulus;
            return result;
        }
        return number;
    }

    Number Calculator::Inverse(const Number& number) {
        Number q(""), x("0"), lastx("1"), y("1"), lasty("0"), temp1(""), temp2(""), temp3(""), _a(""), _b("");

        if (m_Modulus > number) {
            _a = m_Modulus;
            _b = number;
        }
        else {
            _a = number;
            _b = m_Modulus;
        }
        while (_b.ToString() != "0") {
            q = _a / _b;
            temp1 = Remainder(_a, _b);

            _a = _b;
            _b = temp1;

            temp2 = x;
            x = (lastx -(q * x));
            lastx = temp2;

            temp3 = y;
            y = (lasty -(q * y));
            lasty = temp3;
        }
        return Modul(lasty);
    }

    void Calculator::SetModulus(const Number& modulus) {
        if (Number("-1") < modulus) {
            m_Modulus = modulus;
        }
        else {
            throw std::invalid_argument("modulus can't be less than 0!");
        }
    }

    Number Calculator::ModuloDivision(const Number& left, const Number& right) {
        return Modul(Multiplication(left, Inverse(right)));
    }

    Number& Calculator::Increment(Number& number) {
        number = Modul(++number);
        return number;
    }

    Number& Calculator::Decrement(Number& number) {
        number = Modul(--number);
        return number;
    }
}