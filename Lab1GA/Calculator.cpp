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

        //left._remove_leading_zeros();  ??
        return answer;
    }
}