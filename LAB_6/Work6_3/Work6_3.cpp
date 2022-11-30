#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

int main()
{
    system("cls");
    setlocale(LC_ALL, "Ukr");
    const int n = 10;
    int i, a[n];
    cout << "Введіть масив А[" << n << "]= ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    system("cls");
    cout << " Вхідний масив А[" << n << "]= ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        if (a[i] % 2 == 0)
        {
            a[i] = i;
        }
    }
    cout << "Модифікований масив A[" << n << "]= ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

