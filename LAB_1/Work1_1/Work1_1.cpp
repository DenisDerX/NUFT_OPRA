#include <math.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

int main()
{
	system("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 55");
	double Z1, Z2, Z3, a;
	cout << " Введіть значення змінної a = ";
	cin >> a;
	Z1 = 1 - (1 / 4) - pow(2 * sin(a), 2) + (2 * cos(a));
	Z2 = pow(cos(a), 2) + pow(cos(a), 4);
	Z3 = (2 * Z1) + (1 / Z2);
	SetColor(7, 0);
	printf("Результат Z1=%5.3f\n", Z1);
	SetColor(7, 0);
	printf("Результат Z2=%5.3f\n", Z2);
	SetColor(7, 0);
	printf("Результат Z3=%5.3f\n", Z3);
	SetColor(7, 0);
	system("pause");

}
