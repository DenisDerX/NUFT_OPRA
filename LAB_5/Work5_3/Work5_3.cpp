
#include <math.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main()
{
	system("cls");
	setlocale(LC_ALL, "Ukr");
	double Sum, S, e, x, k{ 1 };
	int n = 0;
	cout << "E в діапазоні (0<E<1): ";
	cin >> e;
	cout << "X: ";
	cin >> x;
	S = cos(pow((x), k)) / pow(k, 2);
	Sum = S;
	do
	{
		S = cos(pow((x), k)) / pow(k, 2);
		Sum = Sum + S;
		k++;
		n++;
		printf("Sum = %d\nN = %d\n", Sum, n);
	} 
	while (e<=fabs(S));
	return 0;
}