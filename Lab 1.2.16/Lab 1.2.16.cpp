#include <iostream>
#include <string>
#include <math.h>

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction(int numerator, int denominator);
    std::string toString();
    double toDouble();
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

int main()
{
    int num, den;
    std::string input = "";

    std::cout << "\nInsert the numerator: \n";
    std::cin >> num;
    std::cout << "\nInsert the denominator: \n";
    std::cin >> den;

    Fraction fraction(num, den);

    std::cout << "\n" << fraction.toString() << " is " << fraction.toDouble() << " in decimal\n\n";
    return 0;
}