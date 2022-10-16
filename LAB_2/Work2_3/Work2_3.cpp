/*file name: Work2_3.cpp
*Cтудент: Держій Денис Юрійович
*Група: КН – 1 - 2
*Дата створення: 06/10/2022
*Дата останньої зміни: 16/10/2022
*Лабораторна робота №2
*Тема: Алгоритмізація та програмування задач розгалуженої структури
*Завдання: Скласти програму, яка в залежності від порядкового номера місяця (1, 2, ..., 12) виводить на екран кількість днів у цьому місяці. (Для лютого вивести «28 або 29»).
*/

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
    cout<< ("Введіть номер місяця");
    cin>> x;
    switch (x)
    {
    case 1:cout << "Січень 31 день"; 
    case 2:cout << "Лютий 28/29 днів"; break;
    case 3:cout << "Березень 31 день"; break;
    case 4:cout << "Квітень 30"; break;
    case 5:cout << "Травень 31 день"; break;
    case 6:cout << "Червень 30 днів"; break;
    case 7:cout << "Липень 31 день"; break;
    case 8:cout << "Серпень 31 день"; break;
    case 9:cout << "Вересень 30 днів"; break;
    case 10:cout << "Жовтень 31 день";  break;
    case 11:cout << "Листопад 30 днів"; break;
    case 12:cout << "Грудень 31 день"; break;
    }
}