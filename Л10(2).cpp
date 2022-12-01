//Лабораторная работа 10, Задание 1, Вариант 10, Упражнение 2//

#include <iostream>

using namespace std;

int main ()
{
	setlocale(LC_ALL, "Russian");
	int math;
	int phys;
	int bio;
	int lang;
	int geo;
	
	cout << "Математика: ";
	cin >> math;

	cout << "Физика: ";
	cin >> phys;

	cout << "Биология: ";
	cin >> bio;

	cout << "Иностранный язык: ";
	cin >> lang;

	cout << "География: ";
	cin >> geo;

	cout << "Результат: " << static_cast<float> (math + phys + bio + lang + geo) / 5 << endl;
	
	return 0;
}
