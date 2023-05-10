#include "dll_lib2.h"
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main() 
{
    system("cls");
    setlocale(LC_CTYPE, "UKR");
    char mat[100];
    cout << " Введіть символьний рядок = ";
    cin.getline(mat, 100);
    cmat(mat);
    cout << "Перетворений символьний рядок = " << mat << endl;
    return 0;
}
