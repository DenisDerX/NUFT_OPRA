#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int cr_m(int* m, int nf, int mf)
{
    for (int i = 0; i < nf; i++) {
        for (int j = 0; j < mf; j++) {
            *(m + i * mf + j) = rand() % 100 - 40;
        }
    }
    return 0;
}

int pr_m(int* m, int nf, int mf)
{
    for (int i = 0; i < nf; i++) {
        for (int j = 0; j < mf; j++) {
            printf("%4d ", *(m + i * mf + j));
        }
        cout << endl;
    }
    return 0;
}

int average(int* m, int nf, int mf, int index)
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < nf; i++) {
        int element = *(m + i * mf + index);
        if (element > 0) {
            sum += element;
            count++;
        }
    }
    if (count > 0) {
        return sum / count;
    }
    else {
        return 0;
    }
}

int main()
{
    system("cls");
    setlocale(LC_CTYPE, "UKR");
    srand(time(NULL));
    const int nf = 4;
    const int mf = 4;
    int m[nf][mf];
    printf("Вхідна матриця: ");
    cout << endl;
    cr_m((int*)m, nf, mf);
    pr_m((int*)m, nf, mf);
    int av[mf];
    for (int j = 0; j < mf; j++) {
        av[j] = average((int*)m, nf, mf, j);
    }
    cout << "Масив з середнього арифметичного серед додатних елементів кожного стовпчика:";
    for (int j = 0; j < mf; j++) {
        printf("%4d ", av[j]);
    }
    cout << endl;
    return 0;
}
