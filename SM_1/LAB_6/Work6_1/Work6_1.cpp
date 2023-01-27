#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <vector>
using namespace std;

int main()
{
    system("cls");
    setlocale(LC_ALL, "Ukr");
    int i, n, kill=0;
    vector <int> a;
    cout << "Введіть кількість елементів, які бажаєте бачити на екрані ";
    cin >> n;
    a.resize(n);
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 100 - 50;
    }
    cout << "Сформований масив A["<<n<<"]";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    for (i = 0; i < n; i++)
    {
        if (a[i]%2==0 && a[i]>0)
        kill++;
    }
    cout << endl << "Кількість додатніх елементів= " << kill << endl;
    system("pause");
    return 0;
}   


