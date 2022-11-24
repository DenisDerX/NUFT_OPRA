#include <math.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int F(int i)
{
    if (i == 0)
        return 0;
    if (i == 1)
        return 1;
    return F(i - 1) + F(i - 2);
}
int main()
{
    system("cls");
    setlocale(LC_ALL, "Ukr");
    int x;
    cout << "Вкажіть кількість чиесл які бажаєте, щоб було виведено на екран: ";
    cin >> x;
    int i = 0;
    while (i < x)
    {
        cout << F(i) << " ";
        i++;
    }
    return 0;
}