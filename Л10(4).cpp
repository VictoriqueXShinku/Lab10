//Лабораторная работа 10, Задание 3, Вариант 6//

#include <iostream>
#include <cmath>

int main() {
    double x;
    std::cin >> x;
    double z1 = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
    double z2 = 4 * cos(x / 2) * cos(2.5 * x) * cos(4 * x);
    std::cout << z1 << "\t" << z2;
}

//Результати обчислення співпадають//