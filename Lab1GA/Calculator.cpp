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
        /*Number answer(left);
        if (left.GetSign() == Number::Sign::Minus) {
            if (right.GetSign() == Number::Sign::Minus) return -Plus(-left, (-right));
            else
                return Minus(right, (-left));
        }
        else if (right.GetSign() == Number::Sign::Minus) return Minus(left, (-right));
        bool carry = false;
        for (size_t i = 0; i < answer.GetDigits().size() || carry; i++) {
            if (i == answer.GetDigits().size()) {
                answer.m_Digits.push_back(0);
            }
            answer.m_Digits[i] += carry + right.GetDigits()[i];
            carry = answer.GetDigits()[i] >= Number::Base;
            if (carry) {
                answer.m_Digits[i] -= Number::Base;
            }
        }
        if (m_Modulus <answer) {
            answer = Minus(answer, m_Modulus);
        }
        return answer;*/
    }

    Number Calculator::Minus(const Number& left, const Number& right) {
        return Modul(left - right);
        /*if (right.ToString() == "0") return left;
        Number answer(left);
        if (right.GetSign() == Number::Sign::Minus) return Plus(left, (-right));
        else if (left.GetSign() == Number::Sign::Minus) return -(Plus((-left), right));
        else if (left<right) {
            answer = -Minus(right,left);
            answer.RemoveLeadingZeros();
            return answer;
        }
        bool carry = false;
        for (size_t i = 0; i < right.GetDigits().size() || carry != 0; ++i) {
            answer.m_Digits[i] -= carry + right.GetDigits()[i];
            carry = left.GetDigits()[i] < 0;
            if (carry) {
                answer.m_Digits[i] += Number::Base;
            }
        }
        answer.RemoveLeadingZeros();
        return answer;*/
    }

    Number Calculator::Multiplication(const Number& left, const Number& right) {
        return Modul(left * right);
        /*Number answer("");
        if (left.GetSign() == Number::Sign::Minus && right.GetSign() == Number::Sign::Minus)
            answer.SetSign(Number::Sign::Plus);
        else if (left.GetSign() == Number::Sign::Plus && right.GetSign() == Number::Sign::Plus)
            answer.SetSign(Number::Sign::Plus);
        else 
            answer.SetSign(Number::Sign::Minus);

        answer.m_Digits.resize(left.GetDigits().size() + right.GetDigits().size());
        for (size_t i = 0; i < left.GetDigits().size(); ++i) {
            uint64_t carry = 0;
            for (size_t j = 0; j < right.GetDigits().size() || carry != 0; ++j) {
                uint64_t cur = answer.GetDigits()[i + j] +
                    left.GetDigits()[i] * 1LL * (j < right.GetDigits().size() ? right.GetDigits()[j] : 0) + carry;
                answer.m_Digits[i + j] = static_cast<int>(cur % Number::Base);
                carry = static_cast<uint64_t>(cur / Number::Base);
            }
        }
        answer.RemoveLeadingZeros();
        return answer;*/
    }

    Number Calculator::Division(const Number& left, const Number& right) {
        return Modul(left / right);
        /*if (right.ToString() == "0") throw std::exception{ "Divide By Zero" };
        Number b(right.ToString());
        Number result(""), current("");
        result.m_Digits.resize(left.GetDigits().size());

        for (long long i = static_cast<long long>(left.GetDigits().size()) - 1; i >= 0; --i) {
            current.ShiftRight();
            current.m_Digits[0] = left.GetDigits()[i];
            current.RemoveLeadingZeros();
            int x = 0, l = 0, r = Number::Base;
            while (l <= r) {
                int m = (l + r) / 2;
                Number _m(std::to_string(m));
                Number t(Multiplication(b, _m).ToString());
                if (t <= current) {
                    x = m;
                    l = m + 1;
                }
                else r = m - 1;
            }
            Number _x(std::to_string(x));
            result.m_Digits[i] = x;
            current = Minus(current, Multiplication(b, _x));
        }

        result.RemoveLeadingZeros();
        return result;*/
    }

    Number Calculator::Modul(const Number& number) {
        if (number > m_Modulus || number == m_Modulus)
            return Remainder(number, m_Modulus);
        else if (number.GetSign() == Number::Sign::Minus) {
            Number result(number + ((number / m_Modulus) * m_Modulus));
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
            q = Division(_a, _b);
            temp1 = Remainder(_a, _b);

            _a = _b;
            _b = temp1;

            temp2 = x;
            x = Minus(lastx, Multiplication(q, x));
            lastx = temp2;

            temp3 = y;
            y = Minus(lasty, Multiplication(q, y));
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
}