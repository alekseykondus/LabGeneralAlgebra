#include "Calculator.h"

namespace LongArithmetic {
    Calculator::Calculator(const Number& modulus) :
        m_Modulus("0") {
        SetModulus(modulus);
    }
    
    Number Calculator::Remainder(const Number& left, const Number& right) {
        Number result(left -  ((left / right) * right));
        if (result.GetSign() == Number::Sign::Minus) result = result + right;
        return result;
    }

    Number Calculator::Plus(const Number& left, const Number& right) {
        return Modul(Modul(left) + Modul(right));
    }

    Number Calculator::Minus(const Number& left, const Number& right) {
        return Modul(Modul(left) - Modul(right));
    }

    Number Calculator::Multiplication(const Number& left, const Number& right) {
        return Modul(Modul(left) * Modul(right));
    }

    Number Calculator::Division(const Number& left, const Number& right) {
        return Modul(Modul(left)/Modul(right));
    }

    Number Calculator::Modul(const Number& number) {
        if (number > m_Modulus || number == m_Modulus) {
            return Remainder(number, m_Modulus);
        }
        else if (number.GetSign() == Number::Sign::Minus) {
            Number result(number + ((-(number / m_Modulus)) * m_Modulus));
            if (result.GetSign() == Number::Sign::Minus) result = result + m_Modulus;
            return result;
        }
        return number;
    }

    void Calculator::SetModulus(const Number& modulus) {
        if (Number("-1") < modulus) {
            m_Modulus = modulus;
        }
        else {
            throw std::invalid_argument("modulus can't be less than 0!");
        }
    }

    Number Calculator::GetModulus() const {
        return m_Modulus;
    }

    Number Calculator::ModuloDivision(const Number& left, const Number& right) {
        return Modul(Multiplication(Modul(left), Inverse(Modul(right))));
    }

    Number& Calculator::Increment(Number& number) {
        number = Modul(++number);
        return number;
    }

    Number& Calculator::Decrement(Number& number) {
        number = Modul(--number);
        return number;
    }

    Number Calculator::Inverse(Number a) {
        a = Modul(a);
        Number b = m_Modulus;
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
        return Modul(lasty);
    }
    Number Calculator::SqrtL(Number number)
    {
        Number zero("0");
        Number one("1");
        Number two("2");
        if (number < zero)
        {
            Number noSqrt("-1");
            return noSqrt;
        }
        if (number == zero)
        {
            return zero;
        }
        Number div("1"), rslt("0");
        while (number > zero)
        {
            number = number - div; div = div + two;
            rslt = rslt + (number < zero ? zero : one);
        }
        return rslt;
    }
    Number Calculator::DiscretLog(Number& left, Number& right, Number& modul)
    {
        left = left % modul;
        right = right % modul;
        Number one("1");
        Number n = (Number)SqrtL(modul) + one;

        Number an("1");
        for (Number i("0"); i < n; i++)
            an = (an * left) % modul;

        std::map<Number, Number> vals;
        for (Number i("1"), cur = an; i <= n; i++) {
            if (!vals.count(cur))
                vals[cur] = i;
            cur = (cur * an) % modul;
        }

        for (Number i("0"), cur = right; i <= n; i++) {
            if (vals.count(cur)) {
                Number ans = vals[cur] * n - i;
                if (ans < modul)
                    return ans;
            }
            cur = (cur * left) % modul;
        }
        Number noAns("-1");
        return noAns;
    }

    //----------- Montgomery related ------------/

    Number evklidMont(Number a, Number b, Number& a1, Number& b1) {
      Number q(""), x(""), lastx(""), y(""), lasty(""), temp(""), temp1(""),
          temp2(""), temp3("");

      if (b > a) {
        temp = a;
        a = b;
        b = temp;
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
      a1 = lastx;
      b1 = lasty;
      return lasty;
    }


    int gcdex(int a, int b, int &x, int &y) {
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
      } else {
        result = x;
        return result;
      }
    }


    Number Power(Number a, Number b, Number mod) {
      Number res("1");
      for (int i = 0; i < std::stoi(b.ToString()); i++) {
        res = res * a;
      }
      return res - (res / mod) * mod;
    }

    Number calculateMontgomeryCoefficient(const Number &mod) {
      auto size = std::to_string(mod.ToString().size());
      return Power(Number("10"), Number(size), mod);
    }

    Number Calculator::montMult(Number a, Number b, Number mod) {
      Number R_inv(""), P_inv("");
      Number R = calculateMontgomeryCoefficient(mod);
      evklidMont(R, mod, P_inv, R_inv);
      using namespace LongArithmetic;
      Calculator calculator(mod);
      Calculator calculatorR(R);

      R_inv = calculator.Modul(R_inv);
      P_inv = calculator.Modul(-P_inv);

      //  P_inv = Calculator(mod).Modul(P_inv);
      //  std::cout << R_inv.ToString() << " <- " << P_inv.ToString();
      Number a_inv = calculator.Modul(a * R);
      Number b_inv = calculator.Modul(b * R);

      Number t = a_inv * b_inv;
      Number tm = calculatorR.Modul(t);

      Number u = calculator.Modul((t + (calculatorR.Modul(P_inv * tm) * mod)) *
                                  calculator.Inverse(R));

      while (u > mod)
        u = u - mod;

      return u;
    };


    Number Calculator::montPow(Number a, Number b, Number mod) {
      //impl
      return Number("0");

    }
    //-------------
}
