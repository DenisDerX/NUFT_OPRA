#include "StaticLab4.h"
#include "dll_lib4.h"
using namespace std;
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
