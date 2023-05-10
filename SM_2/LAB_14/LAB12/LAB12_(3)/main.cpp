#include "StaticLib3.h"
#include "dll_lib3.h"
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
	int k= count(v, nv);
	cout << "Кількість непарних додатніх елементів у масиві: " << k << endl;
	return 0;
}
