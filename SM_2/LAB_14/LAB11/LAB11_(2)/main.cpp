#include "StaticLab2.h"
#include "dll_lib2.h"

using namespace std;

int main()
{
    system("cls");
    setlocale(LC_CTYPE, "UKR");
    srand(time(NULL));
    int a[10][10], f[10];
    int n, m;
    cout << " ¬вед≥ть к≥льк≥сть р€дк≥в n = ";
    cin >> n;
    cout << " ¬вед≥ть к≥льк≥сть стовпчик≥в m = ";
    cin >> m;
    cr_m(&a[0][0], n, m);
    printf(" ¬х≥дна матриц€ a(%d,%d)\n", n, m);
    pv_m(&a[0][0], n, m);

    for (int j = 0; j < m; j++) {
        if (j % 2 == 1) {
            for (int i = 0; i < n; i++) {
                f[i] = a[i][j];
            }
            gnome_sort(f, n);
            for (int i = 0; i < n; i++) {
                a[i][j] = f[i];
            }
        }
    }

    printf(" ¬≥дсортована матриц€ a(%d,%d)\n", n, m);
    pv_m(&a[0][0], n, m);
    return 0;
}

