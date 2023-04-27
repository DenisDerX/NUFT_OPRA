#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int creatv(int* v, int nv)
{
	int i;
	for (i = 0; i < nv; i++)
		*(v + i) = rand() % 11;
	return 0;
}
int outv(int* v, int nv)
{
	int i;
	for (i = 0; i < nv; i++)
		printf("%5d ", *(v + i));
	cout << "\n";
	return 0;
}
int det(int* v, int nv)
{
	int i;
	for (i = 0; i < nv - 1; i++)
	{
		if (*(v + i) < *(v + i + 1))
			return false;
	}
	return true;
}
int main()
{
	system("cls");
	setlocale(LC_CTYPE, "UKR");
	srand(time(NULL));
	const int nv = 5;
	int v[nv];
	creatv(v, nv);
	cout << "Сформований масив [" << nv << "] = ";
	outv(v, nv);
	if (det(v, nv))
		cout << "Масив розташований у порядку зменшення за значенням.\n";
	else
		cout << "Масив розташований не в порядку спадання за значенням\n";

	system("pause");
	return 0;
}