#include <iostream>
#include "Rational.h"

int main()
{
    setlocale(0, "");

    Rational n1(16, 4), n2(24, 42);

    Rational n3(10, 3), n4(14, 8);

    std::cout << "n1: ";
    n1.Show();

    std::cout << "n2: ";
    n2.Show();

    Rational result = n1 - n2;

    std::cout << "Результат n1 - n2: ";
    result.Show();

    std::cout << "n3: ";
    n3.Show();

    std::cout << "n4: ";
    n4.Show();

    result = n3.Dividing(n4);
    

    std::cout << "Результат деления n3 на n4: ";
    result.Show();
}

