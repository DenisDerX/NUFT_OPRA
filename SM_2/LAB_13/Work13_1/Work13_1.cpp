#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

void mat(int arr[], int size, int& count, int& sum) {
    count = 0;
    sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
            sum += i;
        }
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
    int count, sum;
    mat(v, nv, count, sum);
    cout << "Кількість додатніх елементів: " << count << "\n";
    cout << "Сума індексів додатніх елементів: " << sum << "\n";
    return 0;
}
