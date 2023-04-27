#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <string>

using namespace std;

string cmat(string mat)
{
    for (int i = 0; i < mat.size(); i++) 
    {
        if (mat[i] == '/') 
        {
            mat[i] = '*';
        }
    }

    return mat;
}

int main() 
{
    system("cls");
    setlocale(LC_CTYPE, "UKR");
    string mat;
    cout << " Введіть символьний рядок = ";
    getline(cin, mat);
    string res = cmat(mat);
    cout << "Перетворений символьний рядок = " << res << endl;
    return 0;
}