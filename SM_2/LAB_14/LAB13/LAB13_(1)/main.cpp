#include "StaticLib1.h"
#include "dll_lib.h"
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
    int count, sum;
    mat(v, nv, count, sum);
    cout << "ʳ������ ������� ��������: " << count << "\n";
    cout << "���� ������� ������� ��������: " << sum << "\n";
    return 0;
}

