#include "Calculator.h"

namespace LongArithmetic {
    Calculator::Calculator(const Number& number) :
        m_Number(number) {}

    bool Calculator::Less(const Number& left, const Number& right)
    {
        for (auto leftIt = left.GetDigits().begin(), rightIt = right.GetDigits().begin();
            leftIt != left.GetDigits().end();
            leftIt++, rightIt++) {
            if (*leftIt < *rightIt) {
                return true;
            }
            else if (*leftIt < *rightIt) {
                return false;
            }
        }
        return false;
    }


    Number Calculator::Plus(const Number& left, const Number& right) {
        Number answer(left);
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
        if (Less(m_Number, answer)) {
            answer = Minus(answer, m_Number);
        }
        return answer;
    }

    Number Calculator::Minus(const Number& left, const Number& right) {
        if (right.ToString() == "0") return left;
        Number answer(left);
        if (Less(left,right)) {
            return Minus(m_Number, (Minus(right,left)));
        }
        bool carry = false;
        for (size_t i = 0; i < right.GetDigits().size() || carry != 0; ++i) {
            answer.m_Digits[i] -= carry + right.GetDigits()[i];
            carry = left.GetDigits()[i] < 0;
            if (carry) {
                answer.m_Digits[i] += Number::Base;
            }
        }
        //answer.RemoveLeadingZeros();  ??
        return answer;
    }
    Number Calculator::Multiplication(const Number& left, const Number& right) {
        Number answer("");
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
        return answer;
    }

    Number Calculator::Division(const Number& left, const Number& right) {

        if (right.ToString() == "0") throw Number::DivideByZero();
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
        return result;
        return Number("");
    }

    Number Calculator::Modul(const Number& number) {
        return Number("");
    }
}