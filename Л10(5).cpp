//Лабораторна работа 10, Завдання 4, Варіант 26//

#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	float b, a, x, y;
	const float t = 2, E = 2.71828;

	cout << "Введіть b: ";
	cin >> b;

	a = pow(E, t + b);
	x = sqrt(a + b);
	y = pow(log10(abs(x + a)), 2);

		cout << "A = " << a << endl << "X = " << x << endl << "Y = " << y << endl;

	return 0;
}