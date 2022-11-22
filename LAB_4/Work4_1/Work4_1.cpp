
#include <math.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main()
{
	system("cls");
	setlocale(LC_ALL, "Ukr");
	double Sum, S, e, x, k{1};
	int n = 0;
	cout << "E: ";
	cin >> e;
	cout << "X: ";
	cin >> x;
	S= cos(pow((x), k)) / pow(k, 2);
	Sum = S;
	while (fabs(S) > e)
	{
		S = cos(pow((x), k)) / pow(k, 2);
		Sum = Sum + S;
		k++;
		n++;
	}
	printf("Sum=%d\nN = %d\n", Sum, n);
	return 0;
}