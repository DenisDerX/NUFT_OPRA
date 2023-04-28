#include <time.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

void sort(int* f, int n, int m) 
{
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m - 1; j++) 
		{
			for (int k = j + 1; k < m; k++) 
			{
				if (*(f + i * m + j) > *(f + i * m + k)) 
				{
					int c = *(f + i * m + j);
					*(f + i * m + j) = *(f + i * m + k);
					*(f + i * m + k) = c;
				}
			}
		}
	}
}

void cr_m(int* f, int nf, int mf)
{
	int i, j;
	for (i = 0; i < nf; i++)
		for (j = 0; j < mf; j++)
			*(f + i * mf + j) =rand() % 201 - 100;
}
void pv_m(int* f, int nf, int mf) {
	int i, j;
	for (i = 0; i < nf; i++) {
		for (j = 0; j < mf; j++)
			printf("%5d", *(f + i * mf + j));
		cout << endl;
	}
}
int main()
{
	system("cls");
	setlocale(LC_CTYPE, "UKR");
	srand(time(NULL));
	int a[10][10];
	int n, m;
	cout << " Введіть кількість рядків n = ";
	cin >> n;
	cout << " Введіть кількість стовпчиків m = ";
	cin >> m;
	cr_m(&a[0][0], n, m);
	printf(" Вхідна матриця a(%d,%d)\n", n, m);
	pv_m(&a[0][0], n, m);
	sort(&a[0][0], n, m);
	printf(" Відсортована матриця a(%d,%d)\n", n, m);
	pv_m(&a[0][0], n, m);
	return 0;
}