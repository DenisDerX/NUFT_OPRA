#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

void math(int *v, int nv) {
    int max = v[0];
    for (int i = 1; i < nv; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    for (int i = 0; i < nv; i++) {
        v[i] -= max;
    }
}

int creatv(int* v, int nv)
{
    int i;
    for (i = 0; i < nv; i++)
        *(v + i) = rand() % 201 - 100;
    return 0;
}

int outv(int* v, int nv)
{
    int i;
    for (i = 0; i < nv; i++)
        printf("%5d ", *(v + i));
    cout << "\n";
    return 0;
}

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
    math(v, nv);
    cout << "Перетворений масив: ";
    outv(v, nv);
    return 0;
}