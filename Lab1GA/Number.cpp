#include "Number.h"

#include <cmath>

namespace LongArithmetic {
    Number::Number(const std::string& str) {
        FromString(str);
    }

    Number::Number(const Number& another):
        m_Sign(another.m_Sign), m_Digits(another.m_Digits) {}

    Number::Number(Sign sign, const std::vector<std::uint64_t>& digits):
        m_Sign(sign), m_Digits(digits) {}

    Number Number::operator-() const {
        return Number(m_Sign == Sign::Plus ? Sign::Minus : Sign::Plus, m_Digits);;
    }

    Number::Sign Number::GetSign() const {
        return m_Sign;
    }

    const std::vector<std::uint64_t>& Number::GetDigits() const {
        return m_Digits;
    }

    void Number::FromString(const std::string& str)
    {
        try
        {
            m_Digits.clear();
            if (str.length() == 0) {
                m_Sign = Sign::Plus;
                m_Digits = { 0 };
                return;
            }
            if (str[0] == '-') {
                m_Sign = Sign::Minus;
            }
            else {
                m_Sign = Sign::Plus;
            }

            int power = 0;

            auto end = m_Sign == Sign::Plus ? str.rend() : --str.rend();

            m_Digits.push_back(0);

            for (auto i = str.rbegin(); i != end; i++) {
                if (*i < '0' || *i > '9') {
                    throw std::exception("");
                }
                m_Digits.back() += static_cast<uint64_t>(*i - '0') * powl(10, power);
                if (++power == 16) {
                    power = 0;
                    m_Digits.push_back(0);
                }
            }

            RemoveLeadingZeros();
        }
        catch (const std::exception&) {
            m_Sign = Sign::Plus;
            m_Digits = { 0 };
        }
    }

    std::string Number::ToString() const
    {
        std::string answer;
        if (m_Sign == Sign::Minus) {
            answer.push_back('-');
        }
        for (auto it = m_Digits.rbegin(); it != m_Digits.rend(); it++) {
            answer += std::to_string(*it);
        }
        return answer;
    }

    bool Number::operator==(const Number& another) const {
        return m_Digits == another.GetDigits() && m_Sign == another.GetSign();
    }

    void Number::RemoveLeadingZeros() {
        while (this->m_Digits.size() > 1 && this->m_Digits.back() == 0) {
            this->m_Digits.pop_back();
        }
        if (this->m_Digits.size() == 1 && this->m_Digits[0] == 0) {
            m_Sign = Sign::Plus;
        }
    }
}