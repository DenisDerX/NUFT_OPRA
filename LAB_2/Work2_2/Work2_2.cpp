#include <math.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
	system("cls");
	double A, B, C, D, x, x1, x2;
	setlocale(LC_ALL, "Ukr");
	cout << "Введіть значення  A = ";
	cin >> A;
	cout << "Введіть значення  B = ";
	cin >> B;
	cout << "Введіть значення  C = ";
	cin >> C;
	D = sqrt(pow(B, 2) - 4 * A * C);
	printf("Результат D= %1.0f\n", D);
	if (D>0)
	{
		x1 = ((-B) - D) / (2 * A);
		x2 = ((-B) + D) / (2 * A);
	}
	else (D = 0);
		x = (-B) / (2 * A);

	if (x1 < x2)
        cout << "x1=" << x1 << endl << "x2=" << x2 << endl;
	else 
		cout << "x1=" << x2 << endl << "x2=" << x1 << endl;



}
