#include "Number.h"

#include <string_view>

#include <array>
#include <charconv>
#include <iostream>
#include <string_view>

namespace LongArithmetic {

    Number::Number(std::string& str) {
        try
        {
            std::string_view view(str);
            if (str.length() == 0) {
                m_Sign = Sign::plus;
                return;
            }
            if (str[0] == '-') {
                m_Sign = Sign::minus;
                view.remove_prefix(1);
            }
            else {
                m_Sign = Sign::plus;
            }
            while (view.size() > 18) {
                //std::from_char(view.begin() + view.size() - 19, view.end(), a);   not works
                //Copying to string, maybe can be better
                this->m_Digits.push_back(std::stoll(std::string(view.substr(view.size() - 19, 19))));
                view.remove_suffix(19);
            }
            if (view.size() > 0) {
                this->m_Digits.push_back(std::stoll(std::string(view.substr(0, view.size()))));
            }
            RemoveLeadingZeros();
        }
        catch (const std::exception&)
        {
            m_Sign = Sign::plus;
            m_Digits = { 0 };
        }
    }

    void Number::RemoveLeadingZeros() {
        while (this->m_Digits.size() > 1 && this->m_Digits.back() == 0) {
            this->m_Digits.pop_back();
        }
        if (this->m_Digits.size() == 1 && this->m_Digits[0] == 0) {
            m_Sign = Sign::plus;
        }
    }
}