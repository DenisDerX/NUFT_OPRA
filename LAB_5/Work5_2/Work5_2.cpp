#include <math.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
	system("cls");
	setlocale(LC_ALL, "Ukr");
	const double C = 10;
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
	x = xstart;
	do
	{
		if (x > C)
			y = exp(-x + 1) + (x * (sin(5 * x)));
		else (x <= C);
		y = pow((log(abs(x))), 2) - cbrt(x);
		printf("| %8.4f | %8.4f |\n", x, y);
		x = x + xstep;
	}
	while (x <= xend);
	printf("-------------------------\n");
	system("pause");
	return 0;
}