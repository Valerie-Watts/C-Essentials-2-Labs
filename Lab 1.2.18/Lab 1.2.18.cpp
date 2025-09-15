#include <iostream>
#include <string>
#include <math.h>

class Fraction {
private:
    int numerator;
    int denominator;
    void reduce();
public:
    Fraction(int numerator, int denominator);
    std::string toString();
    double toDouble();
    Fraction plus(Fraction that);
    Fraction minus(Fraction that);
    Fraction times(Fraction that);
    Fraction by(Fraction that);
    bool isGreater(Fraction that);
    bool isLess(Fraction that);
    bool isEqual(Fraction that);
};

Fraction::Fraction(int numerator, int denominator)
{
    this->numerator = numerator;
    this->denominator = denominator;

    if (denominator == 0) {
        denominator = 1;
    }

}

std::string Fraction::toString()
{
    int whole, fraction;
    std::string result, sign;

    if (numerator * denominator > 0)
    {
        sign = "";
    }
    else
    {
        sign = "-";
    }

    whole = abs(numerator) / abs(denominator);
    fraction = abs(numerator) % abs(denominator);

    if (numerator == 0)
    {
        return "0";
    }

    if (whole > 0) {
        result += std::to_string(whole);
    }
    if (fraction > 0)
    {
        if (whole > 0)
        {
            result += " ";
        }
        result += std::to_string(fraction) + "/" + std::to_string(abs(denominator));
    }

    return sign + result;

}

double Fraction::toDouble()
{
    return double(numerator) / denominator;
}

void Fraction::reduce()
{
    int reduction, bigger, smaller, remainder, GCD;

    if (abs(numerator) > abs(denominator)) {
        bigger = abs(numerator);
        smaller = abs(denominator);
    }
    else {
        bigger = abs(denominator);
        smaller = abs(numerator);
    }

    if (smaller == 0)
    {
        return;
    }

    while (smaller != 0) {

        remainder = bigger % smaller;
        bigger = smaller;
        smaller = remainder;

    }

    GCD = bigger;

    this->numerator /= GCD;
    this->denominator /= GCD;

}

Fraction Fraction::plus(Fraction that)
{
    int num, den;

    num = (numerator * that.denominator) + (that.numerator * denominator);
    den = (denominator * that.denominator);

    Fraction result(num, den);
    result.reduce();
    return result;
}

Fraction Fraction::minus(Fraction that)
{
    int num, den;

    num = (this->numerator * that.denominator) - (that.numerator * this->denominator);
    den = (this->denominator * that.denominator);

    Fraction result(num, den);
    result.reduce();
    return result;

}

Fraction Fraction::times(Fraction that)
{
    int num = this->numerator * that.numerator;
    int den = this->denominator * that.denominator;
    Fraction result(num, den);
    result.reduce();
    return result;

}

Fraction Fraction::by(Fraction that)
{
    int num = this->numerator * that.denominator;
    int den = this->denominator * that.numerator;
    Fraction result(num, den);
    result.reduce();
    return result;
}

Fraction read()
{
    int num, den;

    std::cout << "\nInsert the numerator: \n";
    std::cin >> num;
    std::cout << "\nInsert the denominator: \n";
    std::cin >> den;

    Fraction fraction(num, den);

    return fraction;
}

bool Fraction::isGreater(Fraction that)
{
    double f1, f2;

    f1 = double(this->numerator) / denominator;

    f2 = double(that.numerator) / that.denominator;

    if (f1 > f2)
    {
        return true;
    }
    else {
        return false;
    }
}

bool Fraction::isLess(Fraction that)
{
    double f1, f2;

    f1 = double(this->numerator) / denominator;

    f2 = double(that.numerator) / that.denominator;

    if (f1 < f2)
    {
        return true;
    }
    else {
        return false;
    }
}

bool Fraction::isEqual(Fraction that)
{
    double f1, f2;

    f1 = double(this->numerator) / denominator;

    f2 = double(that.numerator) / that.denominator;

    if (f1 == f2)
    {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    Fraction f1 = read();
    Fraction f2 = read();

    std::cout << "Addition: " << f1.toString() << " + " << f2.toString() << " = " << f1.plus(f2).toString() << "\n";
    std::cout << "Subtraction: " << f1.toString() << " - " << f2.toString() << " = " << f1.minus(f2).toString() << "\n";
    std::cout << "Multiplication: " << f1.toString() << " * " << f2.toString() << " = " << f1.times(f2).toString() << "\n";
    std::cout << "Division: " << f1.toString() << " / " << f2.toString() << " = " << f1.by(f2).toString() << "\n";

    if (f1.isGreater(f2)) {
        std::cout << "Comparison: " << f1.toString() << " > " << f2.toString() << "\n ";
    }
    if (f1.isLess(f2)) {
        std::cout << "Comparison: " << f1.toString() << " < " << f2.toString() << "\n ";
    }
    if (f1.isEqual(f2)) {
        std::cout << "Comparison: " << f1.toString() << " = " << f2.toString() << "\n ";
    }

    return 0;
}