//Лабораторная работа 10, Задание 2, Вариант 1//

#include <iostream>
#include <cmath>

template<class T>
class point
{
public:
    T x, y;
    point() {}
    point(T x, T y) {
        this->x = x;
        this->y = y;
    }
    double absolute() {
        return sqrt(x * x + y * y);
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    point<int> A(0, 0);
    point<int> B(1, 0);
    point<int> C(-1, 2);
    point<int> AB;
    AB.x = B.x - A.x;
    AB.y = B.y - A.y;
    point<int> AC;
    AC.x = C.x - A.x;
    AC.y = C.y - A.y;
    point<int> BC;
    BC.x = C.x - B.x;
    BC.y = C.y - B.y;
    double a = AB.absolute();
    double b = BC.absolute();
    double c = AC.absolute();

    double p = (a + b + c) / 3;
    double ha = sqrt(p * (p - a) * (p - b) * (p - c)) * 2 / a;
    double hb = sqrt(p * (p - a) * (p - b) * (p - c)) * 2 / b;
    double hc = sqrt(p * (p - a) * (p - b) * (p - c)) * 2 / c;

    std::cout << "Высота опущенная к стороне к а: " << ha << std::endl;
    std::cout << "Высота опущенная к стороне к b: " << hb << std::endl;
    std::cout << "Высота опущенная к стороне к c: " << hc << std::endl;

    double w = (1.0 / (a + b)) * sqrt(a * b * (a + b + c) * (a + b - c));
    std::cout << "Бисектриса: " << w << std::endl;
    return 0;
}
