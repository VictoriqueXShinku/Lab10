//Лабораторная работа 10, Задание 1, Вариант 10, Упражнение 1//

#include <iostream>

using namespace std;

float male(int age, int height) 
{
	return 50+((float)height-150)*0,52+((float)age-21)/4;
}
float female(int age, int height)
{
	return 50+((float)height-150)*0,75+((float)age-21)/5;
}
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "0 - Мужчина" << endl;
	cout << "1 - Женщина" << endl;
	cout << "Выберите пол: ";
	bool choice;
	int age;
	int height;
	while (true)
	{
		cin >> choice;

		cout << "Возраст: ";
		cin >> age;

		cout << "Рост: ";
		cin >> height;

		float result;
		result = choice ? female(age, height) : male(age, height);
		cout << "Результат: " << result << endl;
	}
}