
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
	float x;
	double e, a, sum = 0;
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