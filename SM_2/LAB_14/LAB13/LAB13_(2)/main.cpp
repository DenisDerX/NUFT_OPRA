#include "StaticLib2.h"
#include "dll_lib2.h"
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
    math(v, nv);
    cout << "������������ �����: ";
    outv(v, nv);
    return 0;
}
