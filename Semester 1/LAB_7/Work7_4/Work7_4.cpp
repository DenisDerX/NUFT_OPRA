#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
    system("cls");
    setlocale(LC_ALL, "Ukr");
    const int n = 3, m = 4, k = 3;
    int i, j, arf=0, l=0;
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
            if (mat[i][j] >= 0)
            {
                arf = arf + mat[i][j];
                l++;
            }
        }
        cout << endl;
    }
    arf = arf / l;
    cout << "Середнэ арифметичне: " << arf << endl;
    return 0;
}