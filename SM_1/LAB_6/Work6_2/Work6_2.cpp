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
    int i,k;
    double a[n];
    cout << "Введіть елементи, які бажаєте бачити в масиві= " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i + 1 << "] = ";
        cin >> a[i];
    }
    system("cls");
    cout << " Вхідний масив А[" << n << "]= ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "Вивести всі числа масиву менші за = ";
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < k)
            cout << "Елементи = " << a[i] << " Індекси = " << i << endl;
    }
    system("pause");
    return 0;
}

