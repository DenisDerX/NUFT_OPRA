#include <math.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main()
{
	system("cls");
	double x, y, a;
	setlocale(LC_ALL, "Ukr");
	cout << "Введіть значення змінної x = ";
	cin >> x;
	cout << "Введіть значення змінної y = ";
	cin >> y;
	if (x * y > 0)
		a = pow(x + y, 2) - sqrt(x * y);
	else
		if (x * y < 0)
			a = pow(x + y, 2) + sqrt(x * y);
		else
			a = pow(x + y, 2) + 1;
	printf("Результат a= %1.0f\n", a);
	system("pause");
}
