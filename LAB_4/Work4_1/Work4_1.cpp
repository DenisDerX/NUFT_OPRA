/* file name : Work4_1.cpp
* Cтудент : Держій Денис Юрійович
* Група : КН – 1 - 2
* Дата створення : 25 / 10 / 2022
* Дата останньої зміни : 25 / 10 / 2022
* Лабораторна робота №4
* Тема : Алгоритмізація та програмування задач циклічної структури з використанням циклу з передумовою WHILE
* Завдання : Розробити алгоритм розв'язку задачі.
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
	int k = 1;
	double e, x, a, sum = 0;
	cout << "Введіть значення E= ";
	cin >> e;
	cout << "Введіть значення X= ";
	cin >> x;
	a = fabs(pow(cos(x), k) / pow(k, 2));
	while (a<e)
	{
		k++;
		a = fabs(pow(cos(x), k) / pow(k, 2));
		sum = sum + a;
	}
	printf("Sum=%10.7f k=%d\n", sum, k);
	system("pause");
	return 0;
}