#pragma once

#include <vector>
#include <cstdint>
#include <string>

namespace LongArithmetic {
	class Number
	{
	public:
		enum class Sign {
			plus = -1,
			minus = 1,
		};

		explicit Number(std::string& str);

		Number operator+(const Number& another);
		Number operator-(const Number& another);
		Number operator*(const Number& another);
		Number operator/(const Number& another);

		Number GetInvertible();
		Sign GetSign() { return m_Sign; }
	private:
		void RemoveLeadingZeros();

		std::vector<std::uint64_t>m_Digits;
		Sign m_Sign;
	};
}