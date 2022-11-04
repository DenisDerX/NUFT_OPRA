#include <math.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main()
{
    system("cls");
    int x;
    setlocale(LC_ALL, "Ukr");
    tryAgain:
    cout << ("Введіть номер кольору світлофора") << endl;
    cout << ("1-Червоний, 2-Жовтий, 3-Зелений") << endl;
    cin >> x;
        switch (x)
    {
    case 1:cout << "Червоний"; break;
    case 2:cout << "Жовтий"; break;
    case 3:cout << "Зелений"; break;
    case 0:break;
    default:
    cout << "Ви ввели некоректну деталь, введіть будь ласка знову!";
    goto tryAgain;
    break;
    }
    return 0;
}