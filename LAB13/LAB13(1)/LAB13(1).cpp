#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "staticlib.h"
#include <dinamiclib.h>

using namespace std;

int main()
{
    system("cls");
    setlocale(LC_CTYPE, "UKR");
    srand(time(NULL));
    const int nv = 5;
    int v[nv];
    creatv(v, nv);
    cout << "Сформований масив [" << nv << "] = ";
    outv(v, nv);
    int count, sum;
    mat(v, nv, count, sum);
    cout << "Кількість додатніх елементів: " << count << "\n";
    cout << "Сума індексів додатніх елементів: " << sum << "\n";
    return 0;
}
