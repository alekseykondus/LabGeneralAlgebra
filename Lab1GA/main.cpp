#include "Number.h"
#include "Calculator.h"
#include "doctest.h"
#include "generators.h"
#include <string>

Number evklid(Number a, Number b);


#define DOCTEST_CONFIG_IMPLEMENT

#ifdef DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
TEST_CASE("testing constructor & ToString & FromString") {
	std::string str;
	LongArithmetic::Number number(str);
	CHECK(number.ToString() == std::string("0"));
	str = "1";
	number.FromString(str);
	CHECK(number.ToString() == std::string(str));
	str = "-1";
	number.FromString(str);
	CHECK(number.ToString() == std::string(str));
	number.FromString("abc");
	CHECK(number.ToString() == std::string("0"));
	str = "1111111111111111111111111111";
	number.FromString(str);
	CHECK(number.ToString() == str);
	str = "1212121212121212121212121212";
	number.FromString(str);
	CHECK(number.ToString() == str);
	str = "54363465876869706345656867532443545767990828364735347564396485709658098097896785623546325478358734658468465469549867098456";
	number.FromString(str);
	CHECK(number.ToString() == str);
	str = "-234687365873465876987987097980923740734254365467567568678879098089089098956765867876946358325893";
	number.FromString(str);
	CHECK(number.ToString() == str);
	str = "-2346873658734658769879870979809237407342543654675675686788790980890t89098956765867876946358325893";
	number.FromString(str);
	CHECK(number.ToString() == std::string("0"));
	str = "234687365873465876987987097980923740734t54365467567568678879098089089098956765867876946358325893";
	number.FromString(str);
	CHECK(number.ToString() == std::string("0"));
	str = "2346873658734658769879870979809237407345436546756756867887909808908909895676586787694635832589a3";
	number.FromString(str);
	CHECK(number.ToString() == std::string("0"));
	str = "2b3468736587346587698798709798092374073454365467567568678879098089089098956765867876946358325893";
	number.FromString(str);
	CHECK(number.ToString() == std::string("0"));
}

TEST_CASE("testing Calculator") {
	using namespace LongArithmetic;
	Calculator calculator(Number("13124325346575678679789870899097686584677777775756756757658"));
	CHECK(calculator.Plus(Number("1111111111111111111111111111111111111111111111111"),
						  Number("2222222222222222222222222222222222222222222222222")) ==
						  Number("3333333333333333333333333333333333333333333333333"));
	CHECK(calculator.Minus(Number("2222222222222222222222222222222222222222222222222"),
						  Number("1111111111111111111111111111111111111111111111111")) ==
						  Number("1111111111111111111111111111111111111111111111111"));
	CHECK(calculator.Minus(Number("2222222222222222222222222222222222222222222222222"),
						  Number("0")) ==
						  Number("2222222222222222222222222222222222222222222222222"));
	CHECK(calculator.Division(Number("1111111111111111111111111111111111111111111111111"),
							  Number("1111111111111111111111111111111111111111111111111")) ==
							  Number("1"));
	CHECK(calculator.Division(Number("2222222222222222222222222222222222222222222222222"),
							  Number("1111111111111111111111111111111111111111111111111")) ==
							  Number("2"));
	
	calculator.SetModulus(Number("7"));
/*	for (long long int i = -100; i < 100; i++) {
		for (long long j = -10; j < 100; j++) {
			CHECK(calculator.Plus(Number(std::to_string(i)),
				Number(std::to_string(j))) ==
				calculator.Modul(Number(std::to_string(i + j))));
			CHECK(calculator.Minus(Number(std::to_string(i)),
				Number(std::to_string(j))) ==
				calculator.Modul(Number(std::to_string(i - j))));
			CHECK(calculator.Multiplication(Number(std::to_string(i)),
				Number(std::to_string(j))) ==
				calculator.Modul(Number(std::to_string(i * j))));

			if (j != 0)
				CHECK(calculator.Division(Number(std::to_string(i)),
				Number(std::to_string(j))) ==
				calculator.Modul(Number(std::to_string(i / j))));
//			CHECK(calculator.Remainder(Number(std::to_string(i)),
//				Number(std::to_string(j))) ==
//				calculator.Modul(Number(std::to_string(i % j))));
		}
	}
	*/

	calculator.SetModulus(Number("170141183460469231731687303715884105727"));

	CHECK(calculator.ModuloDivision(calculator.Multiplication(Number("123456789123"), Number("123456789123")), Number("123456789123")) == Number("123456789123"));
	CHECK(calculator.ModuloDivision(calculator.Multiplication(Number("1234564353453453454789123"), Number("1234567896786123")), Number("1234567896786123")) == Number("1234564353453453454789123"));
	CHECK(calculator.ModuloDivision(calculator.Multiplication(Number("1236353"), Number("250795")), Number("250795")) == Number("1236353"));
	
	CHECK(calculator.Division(calculator.Multiplication(Number("5555555"), Number("666666")), Number("666666")) == Number("5555555"));

	CHECK(calculator.Multiplication(calculator.Inverse(Number("1234789")), Number("1234789")) == Number("1"));
	CHECK(calculator.Multiplication(calculator.Inverse(Number("1233245325325425454354354345435344789")), Number("1233245325325425454354354345435344789")) == Number("1"));

	calculator.SetModulus(Number("170141183"));
	CHECK(calculator.Inverse(Number("123")) == Number("142475950"));

	calculator.SetModulus(Number("2222222222222222222222222222222222222222222222222"));

	CHECK(calculator.Modul(Number("1111111111111111111111111111111111111111111111111")) ==
						   Number("1111111111111111111111111111111111111111111111111"));

	calculator.SetModulus(Number("1111111111111111111111111111111111111111111111111"));
	CHECK(calculator.Modul(Number("2222222222222222222222222222222222222222222222222")) ==
						   Number("0"));
	CHECK(calculator.Modul(Number("-2222222222222222222222222222222222222222222222222")) ==
						   Number("0"));
	CHECK(calculator.Modul(Number("-2222222222222222222222222222222222222222222222221")) ==
						   Number("1"));

	calculator.SetModulus(Number("4"));
	CHECK(calculator.Modul(Number("-1")) ==
						   Number("3"));

	CHECK(calculator.Remainder(Number("179"), Number("96")) == Number("83"));
	CHECK(calculator.Remainder(Number("1111111111111111111111111111111111111111111111111"), 
							   Number("2222222222222222222222222222222222222222222222222")) == 
							   Number("1111111111111111111111111111111111111111111111111"));
	CHECK(calculator.Remainder(Number("123456789"), 
							   Number("123456789")) == 
							   Number("0"));

	calculator.SetModulus(Number("179"));
	CHECK(calculator.Inverse(Number("96")) == Number("69"));
	calculator.SetModulus(Number("132"));
	CHECK(calculator.Inverse(Number("25")) == Number("37"));
	calculator.SetModulus(Number("150"));
	CHECK(calculator.Inverse(Number("101")) == Number("101"));
	calculator.SetModulus(Number("123456789"));
	CHECK(calculator.Inverse(Number("1234567")) == Number("18033013"));
}

TEST_CASE("testing increment decrement") {
	using namespace LongArithmetic;
	Calculator calculator(Number("100"));
	Number number("99");
	SUBCASE("without modulus") {
		CHECK(number++ == Number("99"));
		CHECK(number == Number("100"));
		CHECK(number-- == Number("100"));
		CHECK(number == Number("99"));
		CHECK(++number == Number("100"));
		CHECK(number == Number("100"));
		CHECK(--number == Number("99"));
		CHECK(number == Number("99"));
	}
	SUBCASE("with modulus") {
		CHECK(calculator.Decrement(number) == Number("98"));
		CHECK(calculator.Increment(number) == Number("99"));
		CHECK(calculator.Increment(number) == Number("0"));
		CHECK(calculator.Increment(number) == Number("1"));
		CHECK(calculator.Decrement(number) == Number("0"));
		CHECK(calculator.Decrement(number) == Number("99"));
	}
}
#endif

//�������� ��� ��������
Number evklid(Number a, Number b)
{
	Number q(""), x(""), lastx(""), y(""), lasty(""), temp(""), temp1(""), temp2(""), temp3("");

	if (b > a) {
		temp = a; a = b; b = temp;
	}

	x = Number("0");
	y = Number("1");
	lastx = Number("1");
	lasty = Number("0");
	while (!(b == Number("0"))) {
		q = a / b;
		temp1 = a % b;
		a = b;
		b = temp1;

		temp2 = x;
		x = lastx - q * x;
		lastx = temp2;

		temp3 = y;
		y = lasty - q * y;
		lasty = temp3;

	}
	std::cout << "x=" << lastx.ToString() << std::endl;
	std::cout << "y=" << lasty.ToString() << std::endl;
	return lasty;
}

int gcdex(int a, int b, int& x, int& y) {
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	int x1, y1;
	int d1 = gcdex(b, a % b, x1, y1);
	x = y1;
	y = x1 - (a / b) * y1;
	return d1;
}

// Function returns 1 if such element doesn't exist and 0 if exists and puts it
// in result.
int ReverseElement(int a, int N) {
	int result;
	int x, y, d;
	d = gcdex(a, N, x, y);
	if (d != 1) {
		return 1;
	}
	else {
		result = x;
		return result;
	}
}
int main() {
//	std::cout << ReverseElement(96, 179) << std::endl;
//	evklid(Number("96"), Number("179"));
//	evklid(1234567, 123456789);

#ifdef DOCTEST_CONFIG_IMPLEMENT
	doctest::Context context;
	int res = context.run();
#endif
	//std::string str("abc");
	//LongArithmetic::Number number(str);
	//Generators a;
	//a.Generators::generators(Number("15"), '+');
}