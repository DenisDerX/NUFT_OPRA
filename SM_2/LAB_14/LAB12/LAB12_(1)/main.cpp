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
	cout << "����������� ����� [" << nv << "] = ";
	outv(v, nv);
	if (det(v, nv))
		cout << "����� ������������ � ������� ��������� �� ���������.\n";
	else
		cout << "����� ������������ �� � ������� ��������� �� ���������\n";

	system("pause");
	return 0;
}
