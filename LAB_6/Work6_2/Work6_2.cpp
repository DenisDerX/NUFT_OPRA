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
    int i, im, k;
    double a[n], max;
    cout << "Введіть масив А["<<n<<"]= ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    system("cls");
    cout<< " Вхідний масив А["<<n<<"]= ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    im = 0;
    for (i = 1; i < n; i++)
    {
        im = i;
    }
    cout << "Вивести всі числа масиву менші за = ";
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < k)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl << "Індекс= " << im << endl;
    system("pause");
    return 0;
}


