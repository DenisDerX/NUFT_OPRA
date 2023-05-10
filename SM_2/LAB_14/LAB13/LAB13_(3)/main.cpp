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
	cout << " ¬вед≥ть к≥льк≥сть р€дк≥в n = ";
	cin >> n;
	cout << " ¬вед≥ть к≥льк≥сть стовпчик≥в m = ";
	cin >> m;
	cr_m(&a[0][0], n, m);
	printf(" ¬х≥дна матриц€ a(%d,%d)\n", n, m);
	pv_m(&a[0][0], n, m);
	sort(&a[0][0], n, m);
	printf(" ¬≥дсортована матриц€ a(%d,%d)\n", n, m);
	pv_m(&a[0][0], n, m);
	return 0;
}

