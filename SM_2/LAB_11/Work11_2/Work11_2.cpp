#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <ctime>

using namespace std;
int main()
{
    system("cls");
    setlocale(LC_ALL, "Ukr");
    srand(time(NULL));
    const int n = 5, m = 5;
    int mat[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            mat[i][j] = rand() % 100-40;
        }
    }
    cout << "Початкова матриця:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    for (int j = 1; j <m; j += 2) {
        int i = 0;
        while (i < n) {
            if (i == 0 || mat[i - 1][j] <= mat[i][j]) {
                i++;
            }
            else {
                swap(mat[i][j], mat[i - 1][j]);
                i--;
            }
        }
    }
    cout << endl << "Відсортований масив:" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}