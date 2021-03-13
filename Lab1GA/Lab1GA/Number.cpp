#include "Number.h"

namespace LongArithmetic {

    void Number::RemoveLeadingZeros() {
        while (this->m_Digits.size() > 1 && this->m_Digits.back() == 0) {
            this->m_Digits.pop_back();
        }
        // этот код нужен, чтобы у нас не было отрицательного нуля
        if (this->m_Digits.size() == 1 && this->m_Digits[0] == 0) 
            m_Sign = Sign::plus;
    }

    Number::Number(std::string& str) {
        if (str.length() == 0) {
            // из пустой строки создается ноль
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
            // Вообще-то i должно иметь тип size_t. Но так как это беззнаковый тип,
            // а в int размер теоретически может и не влезть, я использовал long long
            for (long long i = str.length(); i > 0; i -= 19) {
                if (i < 19)
                    this->m_Digits.push_back(atoi(str.substr(0, i).c_str()));
                else
                    this->m_Digits.push_back(atoi(str.substr(i - 19, 19).c_str()));
            }
            // удалим из числа ведущие нули, если они есть
            this->RemoveLeadingZeros();
        }
    }
}