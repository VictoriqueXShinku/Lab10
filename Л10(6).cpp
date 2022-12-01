//Лабораторна работа 10, Завдання 5, Варіант 6//

#include <iostream>
#include <Windows.h>
#include <math.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float x, y, a, result;
	const float E = 2.71828;

	cout << "Введіть x: ";
	cin >> x;

	cout << "Введіть y: ";
	cin >> y;

	cout << "Введіть a: ";
	cin >> a;

	if ((pow(x, 2) - y + 1) == 0) 
	{
		cout << "ERROR! DIVISION ON ZERO!";
		return 1;
	}
	else if ((pow(x, 2) - pow(E, x) - 2) == 0)
	{
		cout << "ERROR! DIVISION ON ZERO!";
		return 1;
	}

	result = ((pow(y, 2) - x) / (pow(x, 2) - y + 1)) - (pow(a, 2) - x + 2) / (pow(x, 2) - pow(E, x) - 2);
	cout << "Результат: " << result;

	return 0;
}