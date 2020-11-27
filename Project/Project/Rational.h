#pragma once

#include <iostream>

class Rational
{
private:

	int _denominator; // Знаменатель

	int _numerator; // Числитель

	int GreatestCommonDivisor(); // Наибольший общий делитель

	void Reduction(); // Сокращение дроби

public:

	Rational(); // Конструктор по умолчанию

	Rational(int numerator, int denominator); // Конструктор с параметрами

	Rational(const Rational& other); // Конструктор копирования

	void Multiplication(const Rational& other); // Метод умножения

	Rational Dividing(const Rational& other); // Метод деления. Передача по ссылке, результат по значению.

	void Show(); // Метод вывода в консоль данных о дроби

	Rational operator*(const Rational& other); // Перегрузка оператора *

	Rational operator/(const Rational& other); // Перегрузка оператора /

	Rational operator+(const Rational& other);

	Rational operator-(const Rational& other);
};
