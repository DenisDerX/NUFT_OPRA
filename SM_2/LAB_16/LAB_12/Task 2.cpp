#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
int main()
{ 
system("cls");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
float x;
fstream f1; //f1 - Вхідний файл
FILE *f2; // Оголошуємо файлову змінну
char sf1[40], sf2[40]; // Змінна для повного імені файлу
char str[80]; // Змінна для зчитування символьного рядка з файлу
printf("Введіть ім'я вхідного файлу: ");
gets(sf1);
f1.open(sf1); //Відкриваємо файл для зчитування в текстовому режимі
if(!f1)
{
printf("Виникла помилка при відкритті файлу \n"); 
return 0;
}
printf("Введіть ім'я файлу для результату : ");
gets(sf2); 
f2=freopen(sf2, "w+", stdout); //Відкриваємо та перенаправляємо потік виведення у заданий файл
if(f2 == NULL)
{
printf("Виникла помилка при відкритті файлу \n"); 
return 0;
}
string s1; // Змінна для символьного рядка
string s2(" */+-"); // Змінна для рядка шаблона символьного рядка
int i, p;
while (!f1.eof()) //Зчитування буде відбуватися до тих пір, поки не дійдемо до кінця файлу
{
f1.getline(str, sizeof(str));
s1=str;
for (i=0;i<(s1.size());i++)
{
if (s1[i] == '*')
{
s1[i] = '/';
}
}
cout<<s1<<"\n";
}
fclose(f2); 
f1.close();
return 0; 
}
