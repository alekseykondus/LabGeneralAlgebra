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
        return answer;
    }

    Number Calculator::Minus(const Number& left, const Number& right) {
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
        answer.m_Digits.resize(left.GetDigits().size() * 2);
        for (size_t i = 0; i < left.GetDigits().size(); i++) {
            bool carry = false;
            for (size_t j = 0; j < right.GetDigits().size() || carry; ++j) {
                long long cur = answer.m_Digits[i + j] +
                    left.GetDigits()[i] * 1 * (j < right.GetDigits().size() ? right.GetDigits()[j] : 0) + carry;
                answer.m_Digits[i + j] = static_cast<uint64_t>(cur % Number::Base);
                carry = static_cast<uint64_t>(cur / Number::Base);
            }
        }
        //answer.RemoveLeadingZeros(); ??
        return answer;
    }

    Number Calculator::Division(const Number& left, const Number& right) {
        return Number("");
    }
}