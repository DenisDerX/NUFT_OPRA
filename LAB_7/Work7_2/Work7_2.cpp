#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
    system("cls");
    setlocale(LC_ALL, "Ukr");
    const int n = 7, m = 8, k=7;
    int i, j;
    int mat[n][m];
    int sum[k]{};
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
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (j > i && mat[i][j] > 0)
            {
                sum[i] = sum[i] + mat[i][j];
            }
        }
        cout << sum[i] << " ";
    }
    return 0;
}