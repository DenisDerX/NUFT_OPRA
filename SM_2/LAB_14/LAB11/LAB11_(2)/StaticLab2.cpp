#include "StaticLab2.h"
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


