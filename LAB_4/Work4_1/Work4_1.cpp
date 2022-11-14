
#include <math.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main()
{
	system("cls");
	setlocale(LC_ALL, "Ukr");
	int n = 1;
	double x, e, a{}, sum = 0;
	cout << "Введіть значення E= ";
	cin >> e;
	cout << "Введіть значення X= ";
	cin >> x;
	while (a<=e)
	{
		n++;
		a = fabs(pow(cos(x), n) / pow(n, 2));
		sum = sum + a;
	}
	printf("Sum=%10.7f N = %d\n", sum, n);
	system("pause");
	return 0;
}