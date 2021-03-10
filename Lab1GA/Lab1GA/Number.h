#pragma once

#include <vector>
#include <cstdint>
#include <string>

namespace LongArithmetic {
	class Number
	{
	public:
		enum class Sign {
			plus = 0,
			minus
		};

		explicit Number(const std::string& str);

		Number operator+(const Number& another);
		Number operator-(const Number& another);
		Number operator*(const Number& another);
		Number operator/(const Number& another);

		Number GetInvertible();
	private:
		std::vector<std::uint64_t>m_Digits;
		Sign m_Sign;
	};
}
