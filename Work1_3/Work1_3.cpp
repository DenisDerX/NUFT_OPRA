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
	cout << "     $$$  $$$ " << endl;
	gotoxy(13, 5);
	cout << "      $$  $$" << endl;
	gotoxy(13, 6);
	cout << "      $$$$$$ " << endl;
	gotoxy(13, 7);
	cout << "   $$$ $$$$ $$$ " << endl;
	gotoxy(13, 8);
	cout << "    $$$    $$$ " << endl;
	gotoxy(13, 9);
	cout << "      $$$$$$ " << endl;
	gotoxy(13, 10);
	cout << "   $$$$$$$$$$$$ " << endl;
	gotoxy(13, 11);
	cout << "  $$$$$$$$$$$$$$ " << endl;
	gotoxy(13, 12);
	cout << "$$$$   $$  $$   $$$$" << endl;
	gotoxy(13, 13);
	cout << "$$$    $$  $$    $$$" << endl;
	gotoxy(0, 0);
	SetColor(1, 1);
	system("pause");
	return 0;
}
