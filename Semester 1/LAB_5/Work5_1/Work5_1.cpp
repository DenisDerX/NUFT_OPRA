#include <math.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
	system("cls");
	setlocale(LC_ALL, "Ukr");
	const double C = 2;
	double sum, mul, P;
	int x, k, i, i_start, i_end, k_start, k_end;
	cout << "Введіть початкове значення i= ";
	cin >> i_start;
	cout << "Введіть кінцеве значення i= ";
	cin >> i_end;
	cout << "Введіть початкове значення k= ";
	cin >> k_start;
	cout << "Введіть кінцеве значення k= ";
	cin >> k_end;
	cout << "Введіть значення x= ";
	cin >> x;
	sum = 1;
	k = k_start - 1;
	do
	{
		k++;
		sum = sum * k * sin(k);
	} while (k <= k_end);
	mul = 1;
	i = i_start + 1;
	do
	{
		i++;
		mul = mul * ((pow(sin(x), 2)) * i + C * (exp(-1 * x + i)));
	} while (i <= i_end);
	P = sqrt(5.32 * 2.51) * sum + mul;
	cout << "Сума= " << sum << endl;
	cout << "Добуток= " << mul << endl;
	printf("P=%7.0f\n", P);
	system("pause");
	return(0);
}
