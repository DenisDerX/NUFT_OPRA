#include "StaticLib3.h"
#include "dll_lib3.h"
using namespace std;
int main()
{
	system("cls");
	setlocale(LC_CTYPE, "UKR");
	srand(time(NULL));
	int a[10][10];
	int n, m;
	cout << " ������ ������� ����� n = ";
	cin >> n;
	cout << " ������ ������� ��������� m = ";
	cin >> m;
	cr_m(&a[0][0], n, m);
	printf(" ������ ������� a(%d,%d)\n", n, m);
	pv_m(&a[0][0], n, m);
	sort(&a[0][0], n, m);
	printf(" ³���������� ������� a(%d,%d)\n", n, m);
	pv_m(&a[0][0], n, m);
	return 0;
}

