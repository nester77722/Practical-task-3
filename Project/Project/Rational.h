#pragma once

#include <iostream>

class Rational
{
private:

	int _denominator; // �����������

	int _numerator; // ���������

	int GreatestCommonDivisor(); // ���������� ����� ��������

	void Reduction(); // ���������� �����

public:

	Rational(); // ����������� �� ���������

	Rational(int numerator, int denominator); // ����������� � �����������

	Rational(const Rational& other); // ����������� �����������

	void Multiplication(const Rational& other); // ����� ���������

	Rational Dividing(const Rational& other); // ����� �������. �������� �� ������, ��������� �� ��������.

	void Show(); // ����� ������ � ������� ������ � �����

	Rational operator*(const Rational& other); // ���������� ��������� *

	Rational operator/(const Rational& other); // ���������� ��������� /

	Rational operator+(const Rational& other);

	Rational operator-(const Rational& other);
};
