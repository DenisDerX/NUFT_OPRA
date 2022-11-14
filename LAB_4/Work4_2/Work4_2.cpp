#include <math.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
	system("cls");
	setlocale(LC_ALL, "Ukr");
	int n, a=0, b=0;
	cout << "Введіть ціле число =";
	cin >> n;
	while (n>0)
	{
		if ((n%10)%2 == 0)
			a++;
		else b++;
		n /= 10;
	}
	printf("Парні числа= %d\n",a);
	printf("Непарні числа = %d\n", b);
	return 0;
}