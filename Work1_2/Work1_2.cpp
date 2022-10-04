#include <math.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

int main()
{
	system("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 55");
	double x1, y1, x2, y2, x3, y3, vecACx, vecACy, vecBCx, vecBCy, AC, BC, dob;
	cout << "Введіть А(x) = ";
	cin >> x1;
	cout << "Введіть A(y) = ";
	cin >> y1;
	cout << "Введіть B(x) = ";
	cin >> x2;
	cout << "Введіть B(y) = ";
	cin >> y2;
	cout << "Введіть C(x) = ";
	cin >> x3;
	cout << "Введіть C(y) = ";
	cin >> y3;
	vecACx = (x3 - x1); //AC- Точка кординат по осі OX
	vecACy = (y3 - y1); //AC- Точка кординат по осі OY
	vecBCx = (x3 - x2); //BC- Точка кординат по осі OX
	vecBCy = (y3 - y2); //BC- Точка кординат по осі OY
	AC = sqrt((pow(vecACx, 2)) + (pow(vecACy, 2))); //Довжина вектора AC
	printf("Результат AC=%5.1f\n", AC);
	BC = sqrt((pow(vecBCx, 2)) + (pow(vecBCy, 2))); //Довжина вектора BC
	printf("Результат BC=%5.1f\n", BC);
	dob = AC * BC; //Добуток AC*BC (Фінал)
	printf("Результат AC*BD=%5.1f\n", dob);
	system("pause");

}