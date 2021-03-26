#include "Number.h"
#include "Calculator.h"
#include "Point.h"
#include "doctest.h"
#include "EllipticCurve.h"
#include <string>

#define DOCTEST_CONFIG_IMPLEMENT

#ifdef DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"

TEST_CASE("1") {
	using namespace LongArithmetic;
	std::string s = "23";
	Number a(s);
	s = "43";
	Number b(s);
	s = "100";
	Calculator calculator(Number("100"));
	CHECK(calculator.Division(b, a) == Number("1"));
	Point g(Number("2"), Number("3"));
	CHECK(g.x() == Number("2"));
	CHECK(g.y() == Number("3"));
	g.setX(g.y());
	CHECK(g.x() == Number("3"));

	g.make_endless();
	Number l = g.x();
	std::cout << l.ToString() << std::endl;
	g.make_normal(Number("3"), Number("3"));
	EllipticCurve e(a, b, a);
	CHECK(e.a() == a);
	CHECK(e.b() == b);
	a = Number("0");
	b = Number("0");
	EllipticCurve e1(a, b, a);
	CHECK(e1.a() == Number("1"));
	CHECK(e1.b() == Number("0"));
	e1.setModul(Number("13"));
	g.setX(Number("7"));
	g.setY(Number("8"));
	CHECK(e1.is_curve_point(g ) );

	g.setX(Number("6"));
	g.setY(Number("12"));
	CHECK(e1.is_curve_point(g));

	g.setX(Number("10"));
	g.setY(Number("10"));
	CHECK(e1.is_curve_point(g));

	g.setX(Number("11"));
	g.setY(Number("11"));
	CHECK(!e1.is_curve_point(g));

	g.setX(Number("12"));
	g.setY(Number("12"));
	CHECK(!e1.is_curve_point(g));

	Point g1(Number("6"), Number("1")), g2(Number("2"), Number("6"));
	CHECK(e1.Sum(g1, g2).x() == Number("9"));
	CHECK(e1.Sum(g1, g2).y() == Number("6"));

	g1 = Point(Number("0"), Number("0")); g2 = Point(Number("5"), Number("0"));
	CHECK(e1.Sum(g1, g2).x() == Number("8"));
	CHECK(e1.Sum(g1, g2).y() == Number("0"));

	g1 = Point(Number("2"), Number("6")); g2 = Point(Number("2"), Number("6"));
	CHECK(e1.Sum(g1, g2).x() == Number("9"));
	CHECK(e1.Sum(g1, g2).y() == Number("7"));

	g1 = Point(Number("4"), Number("4")); g2 = Point(Number("4"), Number("4"));
	CHECK(e1.Sum(g1, g2).x() == Number("9"));
	CHECK(e1.Sum(g1, g2).y() == Number("6"));
}

#endif
int main() {
#ifdef DOCTEST_CONFIG_IMPLEMENT
	doctest::Context context;
	int res = context.run();
#endif
}