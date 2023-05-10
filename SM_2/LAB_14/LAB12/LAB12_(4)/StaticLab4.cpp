#include "StaticLab4.h"
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
