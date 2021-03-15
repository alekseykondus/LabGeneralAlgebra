#pragma once

#include <vector>
#include <cstdint>
#include <string>
#include <iostream>

namespace LongArithmetic {
	class Number
	{
	public:
		enum class Sign {
			Minus = -1,
			Plus = 1
		};

		Number(Sign sign, const std::vector<std::uint64_t>& digits);

		Number(const std::string& str);

		Number(const Number& another);

		Number operator-() const;

		Sign GetSign() const;
		void SetSign(Sign sing) { m_Sign = sing; }
		const std::vector<std::uint64_t>& GetDigits() const;

		void FromString(const std::string& str);	//another name??
		std::string ToString() const;

		bool operator==(const Number& another) const;
		bool operator<(const Number& right) const;
		bool operator<=(const Number& right) const;
		bool operator>(const Number& right) const;

		Number GetInvertible();

		void ShiftRight();
	private:
		void RemoveLeadingZeros();

		static const uint64_t Base = 1'000'000'000;

		std::vector<std::uint64_t>m_Digits;
		Sign m_Sign;

		friend class Calculator;
	};
}