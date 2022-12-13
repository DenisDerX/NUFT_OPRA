#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
    system("cls");
    setlocale(LC_ALL, "Ukr");
    const int n = 7, m = 8;
    int i, j, min=0;
    int mat[n][m];
    srand(time(NULL));
    printf("Ваша матриця");
    cout << endl;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            mat[i][j] = rand() % 100 - 50;
            printf("%4d", mat[i][j]);
        }
        cout << endl;
    }
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (mat[i][j] < min)
				min = mat[i][j];
		}

	}
	cout << "Мінімальний елемент: " << min;
	return 0;
}