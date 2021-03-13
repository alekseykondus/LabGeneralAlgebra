#include "Number.h"

#include <string_view>

namespace LongArithmetic {

    void Number::RemoveLeadingZeros() {
        while (this->m_Digits.size() > 1 && this->m_Digits.back() == 0) {
            this->m_Digits.pop_back();
        }
        if (this->m_Digits.size() == 1 && this->m_Digits[0] == 0)
            m_Sign = Sign::plus;
    }

    Number::Number(std::string& str) {
        std::string_view view(str);
        if (str.length() == 0) {
            m_Sign = Sign::plus;
        }
        else {
            if (str[0] == '-') {
                str = str.substr(1);
                m_Sign = Sign::minus;
            }
            else {
                m_Sign = Sign::plus;
            }
            // size_t ?
            for (long long i = str.length(); i > 0; i -= 19) {
                if (i < 19)
                    this->m_Digits.push_back(atoi(str.substr(0, i).c_str()));
                else
                    this->m_Digits.push_back(atoi(str.substr(i - 19, 19).c_str()));
            }
            this->RemoveLeadingZeros();
        }
    }
}