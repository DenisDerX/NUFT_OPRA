#include <math.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
	system("cls");
	setlocale(LC_ALL, "Ukr");
	const int A = 1;
	double x{}, y, xstart, xend, xstep;
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
	x = xstart - xstep;
	while (x <= xend)
	{
		x = x + xstep;
		y = (cos(pow(x, 3) + pow(x, 2) - pow(x,1) + A)) * exp(2 * x);
		printf("| %8.4f | %8.4f |\n", x, y);
	}
	
	printf("-------------------------\n");
	system("pause");
	return 0;
}

