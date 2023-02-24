#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
    system("cls");
    setlocale(LC_ALL, "Ukr");
    const int m = 6 ,n = 6;
    int i, j;
    int mat[m][n];
    int arr[m / 2];
    srand(time(NULL));
   
    printf("Ваша матриця: ");
    cout << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            mat[i][j] = rand() % 100 - 40;
            printf("%4d", mat[i][j]);
        }
        cout << endl;
    }
    for (int i = 0; i < m; i ++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] > 0)
            {
                sum += mat[i][j];
            }
        }
        arr[i / 2] = sum;
    }
    cout << "Одновимірний масив із сум додатних елементів: ";
    for (int i = 0; i < m / 2; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

    