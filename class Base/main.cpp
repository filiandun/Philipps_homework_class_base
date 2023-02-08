#include <iostream>
#include "base.h"



int main()
{
    setlocale(LC_ALL, "rus");


// БАЗОВЫЙ КЛАСС
    std::cout << "БАЗОВЫЙ КЛАСС: " << std::endl;

    Base<int> base(260, 23);
    base.display_base();

    // КОНСТРУКТОР КОПИРОВАНИЯ КЛАССА BASE
    std::cout << "Конструктор копирования класса base: " << std::endl;

    Base<int> base_copy = base;
    base_copy.display_base();



// КЛАСС ИЗВЛЕЧЕНИЯ КВАДРАТНОГО КОРНЯ
    std::cout << "КЛАСС ИЗВЛЕЧЕНИЯ КВАДРАТНОГО КОРНЯ: " << std::endl;

    Sqrt<int> sqrt(121, 64);
    sqrt.display_base();
    sqrt.display_sqrt();

    // КОНСТРУКТОР КОПИРОВАНИЯ КЛАССА SQRT
    std::cout << "Конструктор копирования класса sqrt: " << std::endl;

    Sqrt<int> sqrt_copy = sqrt;
    sqrt_copy.display_base();
    sqrt_copy.display_sqrt();



// КЛАСС ВОЗВЕДЕНИЯ В КВАДРАТ
    std::cout << "КЛАСС ВОЗВЕДЕНИЯ В КВАДРАТ: " << std::endl;

    Pow<int> pow(4, 16);
    pow.display_base();
    pow.display_pow();

    // КОНСТРУКТОР КОПИРОВАНИЯ КЛАССА POW
    std::cout << "Конструктор копирования класса pow: " << std::endl;

    Pow<int> pow_copy = pow;
    pow_copy.display_base();
    pow_copy.display_pow();





    return 0;
}
