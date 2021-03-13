#include "Number.h"
#include "Calculator.h"
#include "doctest.h"

#include <string>

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
	CHECK(calculator.Multiplication(Number("2222222222222222222222222222222222222222222222222"),
									Number("1000000000000000000000000000000000000000000000000")) ==
									Number("2222222222222222222222222222222222222222222222222000000000000000000000000000000000000000000000000"));
}
#endif

int main() {
#ifdef DOCTEST_CONFIG_IMPLEMENT
	doctest::Context context;
	int res = context.run();
#endif
	std::string str("abc");
	LongArithmetic::Number number(str);
}