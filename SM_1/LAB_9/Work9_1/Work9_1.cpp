#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <TCHAR.H>
#pragma warning(disable : 4996)

using namespace std;

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
	const int ln = 20;
	char MP[ln];
	int n, sel, i, j, t, p, pp, pk;
	struct book
	{
		char name[ln];
		char pib[ln];
		int year;
	};
	int s_y;
	book b_m[100];
	n = 0;
	do
	{
		system("cls");
		gotoxy(20, 5);
		cout << " Головне меню ";
		gotoxy(20, 7); cout << "1. Введення записів";
		gotoxy(20, 8); cout << "2. Усі записи";
		gotoxy(20, 9); cout << "3. Пошук за роком видання";
		gotoxy(20, 12); cout << "6. Вихід";
		gotoxy(20, 13); cout << "Введіть номер пункту: ";
		cin>>(p);
		switch (p)
		{
		case 1:
		{
			i = n - 1;
			s11:
			pp = 1;
			pk = 0;
			i++;
			system("cls");
			printf("Введіть запису номер %d:\n", i+1);
			cout << "Введіть факультет->";
			cin >> b_m[i].name;
			t = strlen(b_m[i].name);
			for (j = t; j < ln - 2; j++)
			(b_m[i].name, " ");
			cout << "Введіть прізвище та ініціали ->";
			cin >> b_m[i].pib;
			t = strlen(b_m[i].pib);
			for (j = t; j < ln - 2; j++)
				(b_m[i].pib, " ");
			cout << "Введіть рік вступу ->";
			cin >> b_m[i].year;
			printf("Для продовження натисніть -> Enter, для вихода -> Esc \n");
		s12:
			while (!kbhit()); /* do nothing*/
			pp = getch();
			if (pp != 27)
				if (pp == 13)
					goto s11;
				else
					goto s12;
			n = i + 1;
			break;
		}
		case 2:
		{
		s2:
			pp = 1;
			system("cls");
			pk = 0;
			if (n < 1)
			{
				printf("Записів немає");
				goto s6;
			}
			for (i = 0; i < n; i++)
			{
				if (pk == 0)
				{
					system("cls");
					cout << "Масив записів \n"
						<< "________________________________\n"
						<< "|№|Факультет|Прізвище та ініціали|Рік вступу|\n"
						<< "________________________________\n";
					pk = 4;
				}
				printf(" |%3d |   %20s  |   %20s  |  %4d |\n", i + 1, b_m[i].name, b_m[i].pib, b_m[i].year);
				if ((pk == 20)||((i + 1) == n))
				{
					cout << "________________________________\n";
				}
				if ((pk == 20)||((i + 1) >= n))
				{
					printf("Записів в масиві %d\n",n);
					printf("Натисніть Enter для продовження виведення записів \n");
					while (!kbhit());/* do nothing*/
				}
			}
		s6:
			printf("Для повторного виведення записів натисніть ->Enter, для виходу -> Esc \n");
		s1:
			while (!kbhit());/* do nothing*/
			pp = getch();
			if (pp != 27)
				if (pp == 13)
					goto s2;
				else
					goto s1;
			break;
		}
		case 3:
		{
		s4:
			pp = 1;
			pk = 0;
			system("cls");
			if (n < 1)
			{
				printf("Записів немає\n");
				goto s5;
			}
			cout << "Введіть рік вступу->";
			cin >> s_y;
			t = 0;
			for (i = 0; i < n; i++)
				if (b_m[i].year == s_y)
					t++;
			if (t < 1)
			{
				cout << "Студенти, що поступили у"<<s_y<<"році немає \n";
				goto s5;
			}
			for (i = 0; i < n; i++)
			{
				if (pk == 0)
				{
					system("cls");
					cout << "Студенти, що поступили у"<<s_y<<"році\n"
					    << "________________________________\n"
						<< "|№|Факультет|Прізвище та ініціали|Рік вступу|\n"
						<< "________________________________\n";
					pk = 4;
				}
				if (b_m[i].year==s_y)
				printf(" |%3d |   %20s  |   %20s  |  %4d |\n", i + 1, b_m[i].name, b_m[i].pib, b_m[i].year);
				if ((pk == 20)||((i + 1) == n))
				{
					cout << "________________________________\n";
				}
				if ((pk == 20)||((i + 1) >= n))
				{
					printf("Записів в масиві %d\n", n);
					printf("Натисніть Enter для продовження виведення записів \n");
					while (!kbhit());/* do nothing*/
				}
			}
		s5:
			printf("Для повторного виведення записів натисніть ->Enter, для виходу -> Esc \n");
		s3:
			while (!kbhit());/* do nothing*/
			pp = getch();
			if (pp != 27)
				if (pp == 13)
					goto s4;
				else
					goto s3;
			break;
		}
		}
	}
	while (p !=6);
	return 0;
}

