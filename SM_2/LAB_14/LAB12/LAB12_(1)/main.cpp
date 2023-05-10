#include "StaticLib1.h"
#include "dll_lib1.h"

using namespace std;
int main()
{
	system("cls");
	setlocale(LC_CTYPE, "UKR");
	srand(time(NULL));
	const int nv = 5;
	int v[nv];
	creatv(v, nv);
	cout << "Сформований масив [" << nv << "] = ";
	outv(v, nv);
	if (det(v, nv))
		cout << "Масив розташований у порядку зменшення за значенням.\n";
	else
		cout << "Масив розташований не у порядку зменшення за значенням\n";

	system("pause");
	return 0;
}
