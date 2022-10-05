#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

void SetColor(int text, int background)

{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
void gotoxy(int xp, int yp)
{
	COORD new_xy;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	new_xy.X = xp; new_xy.Y = yp;
	SetConsoleCursorPosition(hStdOut, new_xy);
}

int main()
{
	system("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 16");
	SetColor(6, 1);
	gotoxy(13, 4);
	cout << "  /^ ^\\ " << endl;
	gotoxy(13, 5);
	cout << " /     \\" << endl;
	SetColor(7, 1);
	gotoxy(16, 5);
	cout << "0 0" << endl;
	SetColor(6, 1);
	gotoxy(13, 6);
	cout << " V\    /V" << endl;
	SetColor(4, 1);
	gotoxy(17, 6);
	cout << "Y" << endl;
	SetColor(6, 1);
	gotoxy(13, 7);
	cout << "  / - \\" << endl;
	gotoxy(13, 8);
	cout << "  |    \\ /" << endl;
	gotoxy(13, 9);
	cout << "  || (__V" << endl;
	gotoxy(0, 0);
	SetColor(1, 1);
	system("pause");
	return 0;
}
