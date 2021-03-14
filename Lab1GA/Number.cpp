#include "Number.h"

#include <cmath>
#include <iomanip>
#include <sstream>

namespace LongArithmetic {
    Number::Number(const std::string& str) {
        FromString(str);
    }

    Number::Number(const Number& another) :
        m_Sign(another.m_Sign), m_Digits(another.m_Digits) {}

    Number::Number(Sign sign, const std::vector<std::uint64_t>& digits) :
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
                if (++power == 9) {
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

    std::ostream& operator <<(std::ostream& os, const Number& number) {
        if (number.GetDigits().empty()) {
            os << 0;
            return os;
        }
        if (number.GetSign() == Number::Sign::Minus) {
            os << '-';
        }
        os << number.GetDigits().back();
        char old_fill = os.fill('0');
        for (auto it = ++number.GetDigits().rbegin(); it != number.GetDigits().rend(); it++) {
            os << std::setw(9) << *it;
        }
        os.fill(old_fill);
        return os;
    }

    std::string Number::ToString() const
    {
        std::ostringstream oss;
        oss << *this;
        return oss.str();
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

    void Number::ShiftRight() {
        if (this->m_Digits.size() == 0) {
            this->m_Digits.push_back(0);
            return;
        }
        this->m_Digits.push_back(this->m_Digits[this->m_Digits.size() - 1]);
        for (size_t i = this->m_Digits.size() - 2; i > 0; --i) this->m_Digits[i] = this->m_Digits[i - 1];
        this->m_Digits[0] = 0;
    }

    bool Number::operator<(const Number& right) const {
        if (m_Digits == right.GetDigits() && m_Sign == right.GetSign()) return false;
        else if (m_Sign == Number::Sign::Minus && right.GetSign() == Number::Sign::Plus) return true;
        else {
            if (m_Digits.size() != right.GetDigits().size()) {
                return m_Digits.size() < right.GetDigits().size();
            }
            else {
                for (long long i = m_Digits.size() - 1; i >= 0; --i) {
                    if (m_Digits[i] != right.GetDigits()[i]) return m_Digits[i] < right.GetDigits()[i];
                }
                return false;
            }
        }
    }
    bool Number::operator<=(const Number& right) const {
        return (*this < right || *this == right);
    }
    bool Number::operator>(const Number& right) const {
        return !(*this <= right);
    }
}