#include <iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Ukr");
	char s;
	string stroka;
	int k = 0, i;
	cout << "Введіть текст: ";
	getline(cin, stroka);
	cout << "Введіть символ, яки бажаєте шукати: ";
	cin >> s;
	cout << "Введіть початкову точку, з якої бажаєте здійснити пошук: ";
	cin >> i;
	for (i; i < stroka.size(); i++)
	{
		if (stroka[i] == s)
		{
			k++;
		}
	}
	cout << "Кількість знайдених символів: " << k << endl;
	return 0;
}