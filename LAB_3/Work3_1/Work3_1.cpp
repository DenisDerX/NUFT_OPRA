/*file name: Work3_1.cpp
*Cтудент: Держій Денис Юрійович
*Група: КН – 1 - 2
*Дата створення: 25/10/2022
*Дата останньої зміни: 25/10/2022
*Лабораторна робота №3
*Тема: Алгоритмізація та програмування задач циклічної структури. Цикл з параметром
*Завдання: Розробити алгоритм табулювання функції.
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
	double x, y, xstart, xend, xstep;
	cout << "Введіть інтервал xstart..xend\n";
	cout << "Введіть xstart =";
	cin >> xstart;
	cout << "Введіть xend =";
	cin >> xend;
	cout << "Введіть xstep =";
	cin >> xstep;
	printf("_________________________\n");
	printf("| x        | y        |\n");
	printf("-------------------------\n");
	for (x = xstart; x <= xend; x = x + xstep)
	{
		if (x > 10)
			y = exp(-x + 1) + (x * (sin(5 * x)));
		else (x <= 10);
		y = pow((log(abs(x))), 2) - cbrt(x);
		printf("| %8.4f | %8.4f |\n", x, y);
	}
	printf("-------------------------\n");
	system("pause");
	return 0;
}

