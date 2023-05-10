#include "StaticLib4.h"
#include "dll_lib4.h"
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
    cout << " ¬вед≥ть к≥льк≥сть стовпц≥в m = ";
    cin >> m;
    cr_m(&a[0][0], n, m);
    printf(" ¬х≥дна матриц€ a(%d,%d)\n", n, m);
    pv_m(&a[0][0], n, m);
    create(&a[0][0], &f[0], n, m);
    printf(" ћасив сум в≥д'Їмних елемент≥в кожного стовпчика: \n");
    for (int i = 0; i < m; i++) {
        printf("%d ", f[i]);
    }
    return 0;
}
