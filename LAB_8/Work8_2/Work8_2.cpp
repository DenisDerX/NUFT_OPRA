﻿#include <iostream>
#include<string>
#include<stdlib.h>
#include<cstring>

using namespace std;

int main()
{
	setlocale(LC_ALL, "English");
	string stroka;
	int n=0,l=0;
	cout << "Введіть текст(Англійською): ";
	getline(cin, stroka);
	for (int i = 0; i < stroka.size(); i++)
	{
		if (isdigit(stroka[i]))
		{
			n++;
		}
		if (isalpha(stroka[i]))
		{
			l++;
		}
	}
	cout << "Кількісить цифр: " <<n<< endl;
	cout << "Кількість букв: " <<l<< endl;
	return 0;
}