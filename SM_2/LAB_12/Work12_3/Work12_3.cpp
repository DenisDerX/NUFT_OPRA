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
		*(v + i) = rand() % 21 - 10;
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
int count(int* v, int nv)
{
	int i, k = 0;;
	for (i = 0; i < nv; i++)
	{
		if (*(v + i) > 0 && *(v + i) % 2 != 0)
		{
			k++;
		}
	}
	return k;
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
	int k= count(v, nv);
	cout << "Кількість непарних додатніх елементів у масиві: " << k << endl;
	return 0;
}