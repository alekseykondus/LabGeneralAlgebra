#include "EllipticCurve.h"
#include "Calculator.h"
#include "Number.h"
#include <iostream>

bool EllipticCurve::is_curve_point(Point x)
{
	if (x.is_endless()) return true;
	if (calculator->Multiplication(x.y(), x.y()) == calculator->Plus(calculator->Plus(calculator->Multiplication(EllipticCurve::_a, x.x()), EllipticCurve::_b), calculator->Multiplication(calculator->Multiplication(x.x(), x.x()), x.x()))) {
		return true;
	}
	return false;
}
void EllipticCurve::setA(const LongArithmetic::Number& a)
{
	EllipticCurve::_a = a;
}
void EllipticCurve::setB(const LongArithmetic::Number& b)
{
	EllipticCurve::_b = b;
}
void EllipticCurve::setModul(const LongArithmetic::Number& mod)
{
	EllipticCurve::calculator->SetModulus(mod);
	EllipticCurve::modul = mod;
}
LongArithmetic::Number EllipticCurve::a()
{
	return EllipticCurve::_a;
}
LongArithmetic::Number EllipticCurve::b()
{
	return EllipticCurve::_b;
}
LongArithmetic::Number EllipticCurve::Modul()
{
	return EllipticCurve::modul;
}
Point EllipticCurve::Sum(Point p1, Point p2)
{
	try
	{
	if (!EllipticCurve::is_curve_point(p1) || !EllipticCurve::is_curve_point(p2)) throw std::exception();
	if (p1.is_endless()) return p2;
	if (p2.is_endless()) return p1;
	Point p;
	if (!(p1.x() == p2.x())) {
		LongArithmetic::Number m("0");
		p = Point(LongArithmetic::Number("0"), LongArithmetic::Number("0"));
		m = calculator->ModuloDivision(calculator->Minus(p2.y(), p1.y()), calculator->Minus(p2.x(), p1.x()));
		p.setX(calculator->Minus(calculator->Minus(calculator->Multiplication(m, m), p1.x()), p2.x()));
		p.setY(calculator->Minus(calculator->Multiplication(m, calculator->Minus(p1.x(), p.x())), p1.y()));
		return p;
	}
	else {
		if (!(p1.y() == p2.y())) return p;
		else if (!(p1.y() == LongArithmetic::Number("0"))) {
			LongArithmetic::Number m("0");
			p = Point(LongArithmetic::Number("0"), LongArithmetic::Number("0"));
			m = calculator->ModuloDivision(calculator->Plus(calculator->Multiplication(calculator->Multiplication(p1.x(), p1.x()), LongArithmetic::Number("3")), EllipticCurve::_a), calculator->Multiplication(LongArithmetic::Number("2"), p1.y()));
			p.setX(calculator->Minus(calculator->Minus(calculator->Multiplication(m, m), p1.x()), p2.x()));
			p.setY(calculator->Minus(calculator->Multiplication(m, calculator->Minus(p1.x(), p.x())), p1.y()));
			return p;
		}
		else return p;
	}
    }
	catch (const std::exception&)
	{
		std::cout << "Points are not on a curve" << std::endl;
	}
}

Point EllipticCurve::Inverse(Point p)
{
	try
	{
		if (!EllipticCurve::is_curve_point(p)) throw std::exception();
		if (p.is_endless()) return p;
		if (p.y() == LongArithmetic::Number("0")) {
			return p;
		}
		else {
			p.setY(calculator->Inverse(p.y()));
			return p;
		}
	}
	catch (const std::exception&)
	{
		std::cout << "Point is not on a curve" << std::endl;
	}
}