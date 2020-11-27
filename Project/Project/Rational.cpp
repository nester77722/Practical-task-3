#include "Rational.h"

int Rational::GreatestCommonDivisor()
{
	int numerator = _numerator;
	int denominator = _denominator;

	int rem;

	if (numerator < denominator)
	{
		int temp = numerator;

		numerator = denominator;

		denominator = temp;
	}

	while (rem = numerator % denominator)
	{
		numerator = denominator;

		denominator = rem;
	}

	return denominator;
}

void Rational::Reduction()
{
	int greatestCommonDivisor = GreatestCommonDivisor();

	_numerator /= greatestCommonDivisor;

	_denominator /= greatestCommonDivisor;
}

Rational::Rational()
{
	_numerator = 0;

	_denominator = 0;
}

Rational::Rational(int numerator, int denominator)
{
	_numerator = numerator;

	if (denominator != 0)
	{
		_denominator = denominator;
	}
	else
	{
		std::cerr << "«наменатель не может быть равен 0!\nЅыло установлено значение по умолчанию: 1\n";
		_denominator = 1;
	}

	Reduction();

}

Rational::Rational(const Rational& other)
{
	this->_denominator = other._denominator;

	this->_numerator = other._numerator;
}


void Rational::Multiplication(const Rational& other)
{
	this->_denominator *= other._denominator;

	this->_numerator *= other._numerator;

	Reduction();
}

Rational Rational::Dividing(const Rational& other)
{
	return Rational(this->_numerator *= other._denominator, this->_denominator *= other._numerator);
}

void Rational::Show()
{
	std::cout << _numerator << "|" << _denominator << std::endl;
}

Rational Rational::operator*(const Rational& other) // ѕеремножаютс€ числитель на числитель и знаменатель на знаменатель
{
	Rational result = Rational(this->_numerator * other._numerator, this->_denominator * other._denominator);

	return result;
}

Rational Rational::operator/(const Rational& other) // ѕеремножаютс€ числитель первого на знаменатель второго и знаменатель первого на числитель второго
{
	Rational result = Rational(this->_numerator * other._denominator, this->_denominator * other._numerator);

	return result;
}

Rational Rational::operator+(const Rational& other) // ”множение дл€ поиска общего знаменател€
{
	Rational result = Rational(this->_numerator * other._denominator + this->_denominator * other._numerator, this->_denominator * other._denominator);

	return result;
}

Rational Rational::operator-(const Rational& other) // ”множение дл€ поиска общего знаменател€
{
	Rational result = Rational(this->_numerator * other._denominator - this->_denominator * other._numerator, this->_denominator * other._denominator);

	return result;
}
