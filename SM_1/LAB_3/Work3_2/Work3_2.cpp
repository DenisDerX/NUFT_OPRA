/* file name : Work3_2.cpp
* Cтудент : Держій Денис Юрійович
* Група : КН – 1 - 2
* Дата створення : 25 / 10 / 2022
* Дата останньої зміни : 25 / 10 / 2022
* Лабораторна робота №3
* Тема : Алгоритмізація та програмування задач циклічної структури.Цикл з параметром
* Завдання : Розробити алгоритм для підрахунку сум та добутків.
*/

#include <math.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
	system("cls");
	setlocale(LC_ALL, "Ukr");
	double mult = 1.0, sum = 1, i, j, i_start, i_end, j_start, j_end;
	cout << "Введіть початкове значення i= ";
	cin >> i_start;
	cout << "Введіть кінцеве значення i= ";
	cin >> i_end;
	cout << "Введіть початкове значення j= ";
	cin >> j_start;
	cout << "Введіть кінцеве значення j= ";
	cin >> j_end;

	for (i = i_start; i <= i_end; i++)
	{
		sum = 0;
		for (j = j_start; j <= j_end; j++)
		{
			sum = sum + (i / (i + 1));
		}
		mult = mult * (sum / sqrt(j));
	}
	cout << "Результат = " << mult << endl;
	return 0;
}
