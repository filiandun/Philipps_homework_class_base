#include <iostream>
#include "base.h"



int main()
{
    setlocale(LC_ALL, "rus");


// БАЗОВЫЙ КЛАСС
    std::cout << "БАЗОВЫЙ КЛАСС: " << std::endl;

    Base<int> base(260, 23);
    base.display_base();


// КЛАСС ИЗВЛЕЧЕНИЯ КВАДРАТНОГО КОРНЯ
    std::cout << "КЛАСС ИЗВЛЕЧЕНИЯ КВАДРАТНОГО КОРНЯ: " << std::endl;

    Sqrt<int> sqrt(121, 64);
    sqrt.display_base();
    sqrt.display_sqrt();


// КЛАСС ВОЗВЕДЕНИЯ В КВАДРАТ
    std::cout << "КЛАСС ВОЗВЕДЕНИЯ В КВАДРАТ: " << std::endl;

    Pow<int> pow(4, 16);
    pow.display_base();
    pow.display_pow();




    return 0;
}
