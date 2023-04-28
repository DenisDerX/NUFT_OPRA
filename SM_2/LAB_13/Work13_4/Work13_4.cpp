#include <time.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

void cr_m(int* f, int nf, int mf)
{
    int i, j;
    for (i = 0; i < nf; i++)
        for (j = 0; j < mf; j++)
            *(f + i * mf + j) = rand() % 201 - 100;
}
void pv_m(int* f, int nf, int mf) {
    int i, j;
    for (i = 0; i < nf; i++) {
        for (j = 0; j < mf; j++)
            printf("%5d", *(f + i * mf + j));
        cout << endl;
    }
}
void create(int* a, int* f, int n, int m) {
    int i, j, sum;
    for (j = 0; j < m; j++) {
        sum = 0;
        for (i = j + 1; i < n; i++) {
            if (*(a + i * m + j) < 0) {
                sum += *(a + i * m + j);
            }
        }
        *(f + j) = sum;
    }
}
int main()
{
    system("cls");
    setlocale(LC_CTYPE, "UKR");
    srand(time(NULL));
    int a[10][10], f[10];
    int n, m;
    cout << " Введіть кількість рядків n = ";
    cin >> n;
    cout << " Введіть кількість стовпчиків m = ";
    cin >> m;
    cr_m(&a[0][0], n, m);
    printf(" Вхідна матриця a(%d,%d)\n", n, m);
    pv_m(&a[0][0], n, m);
    create(&a[0][0], &f[0], n, m);
    printf(" Масив сум від'ємних елементів кожного стовпчика: \n");
    for (int i = 0; i < m; i++) {
        printf("%d ", f[i]);
    }
    return 0;
}




