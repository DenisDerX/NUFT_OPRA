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
    cout << " ������ ������� ����� n = ";
    cin >> n;
    cout << " ������ ������� �������� m = ";
    cin >> m;
    cr_m(&a[0][0], n, m);
    printf(" ������ ������� a(%d,%d)\n", n, m);
    pv_m(&a[0][0], n, m);
    create(&a[0][0], &f[0], n, m);
    printf(" ����� ��� ��'����� �������� ������� ���������: \n");
    for (int i = 0; i < m; i++) {
        printf("%d ", f[i]);
    }
    return 0;
}
