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
    int i,j, min;
    int mat[n][m];
    srand(time(NULL));
    printf("Ваша матриця: ");
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
		int k = 0, a = 0;
		 ;
		for (int j = 0; j < m; j++)
		{
			if (j >= i && i <= n - 1 && j <= m - 1 - i)
			{
				a = a + mat[i][j];
				k++;
			}
		}
		if (k!= 0)
		{
			printf("Середнє арифметичне= ");
			a = a / k;
			cout << a <<" "<<endl;
		}
	}

	return 0;
}