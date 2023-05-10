#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

void gotoxy(int xp, int yp) 
{
COORD new_xy;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
new_xy.X = xp; new_xy.Y = yp;
SetConsoleCursorPosition(hStdOut,new_xy);
}
//Функція створення файлу та запис мартриці
int p1() 
{
system("cls");
int i, j, n=0, m=0;
float x;
FILE *f; //f - файлова змінна
char sf[40];// Змінна для повного імені файлу
cin.ignore(1,'\n'); 
printf("Введіть ім'я першого текстового файлу: ");
gets(sf);
f=fopen(sf, " w+"); // Відкриваємо файл для запису в текстовому режимі
if(f == NULL)
{
printf("Виникла помилка при створенні файлу \n"); 
while (!kbhit());
return 0;
}
printf("Введіть кількість рядків матриці: ");
cin>>n;
printf("Введіть кількість стовпчиків матриці: ");
cin>>m;
fprintf(f, "n=%d ", n); // Записуємо кількість рядків матриці
fprintf(f, "m=%d \n", m); // Записуємо кількість стовпчиків матриці
for(i=0; i<n; i++)
{
for(j=0; j<(m-1); j++)
{
x=(rand()%100-50.0)/5;
printf("%7.2f ", x);
fprintf(f, "%7.2f ", x);
}
x=(rand()%100-50.0)/5;
printf("%7.2f \n", x);
fprintf(f, "%7.2f \n", x);
}
fclose(f); 
printf("Створено файл %s \n",sf);
while (!kbhit());
return 0;
}
//Процедура створення та запис у файл символьного рядка
int p2() 
{
system("cls");
int i, m, k=0;
FILE *f; // Оголошуємо файлову змінну
char sf[40]; // Змінна для повного імені файлу
char str[77];
cin.ignore(1,'\n'); 
printf("Введіть ім'я другого текстового файлу: ");
gets(sf);
f=fopen(sf, "w+");// Відкриваємо файл для записування в текстовому режимі
if(f == NULL)
{
printf("Виникла помилка при створенні файлу \n"); 
while (!kbhit());
return 0;
}
printf("Для припинення введіть порожній рядок\n");
do
{
printf("%d: ", k);
gets(str);
if (!*str) break;
m=strlen(str);
k++;
for(i=0;i<m;i++)
putc(str[i],f);
putc('\0',f);
putc('\n',f);
}
while(*str); 
printf("\n"); 
fclose(f); // Закриваємо файл
printf("Створено файл %s \n",sf);
while (!kbhit());
return 0;
}
//Процедура створення та запису у файл матриці по елементно
int p3() 
{
system("cls");
int i, j, n=0, m=0;
float x;
FILE *f; //f - Файлова зміна
char sf[40];// Змінна для повного імені файлу
cin.ignore(1,'\n'); 
printf("Введіть ім'я бінарного файлу: ");
gets(sf);
f=fopen(sf, " w+b"); //Відкриваємо файл для роботи з бінарними даними
if(f == NULL)
{
printf("Виникла помилка при створенні файлу \n"); 
while (!kbhit());
return 0;
}
printf("Введіть кількість рядків матриці: ");
cin>>n;
printf("Введіть кількість стовпчиків матриці: ");
cin>>m;
fwrite(&n, sizeof(int), 1, f); // Записуємо першим елементом кількість рядків матриці 
fwrite(&m, sizeof(int), 1, f); // Записуємо другим елементом кількість стовпчиків
for(i=0; i<n; i++)
{
for(j=0; j<m; j++)
{
x=(rand()%100-50.0)/5;
printf("%7.2f ", x);
fwrite(&x, sizeof(float), 1, f);
}
cout<<endl;
}
fclose(f); 
printf("Створено файл %s \n",sf);
while (!kbhit());
return 0;
}
//Процедура створення та запису у файл матриці по рядках
int p4() 
{
system("cls");
int i, j, n=0, m=0;
float x;
FILE *f; //f - Файлова зміна
char sf[40];// Змінна для повного імені файлу
cin.ignore(1,'\n'); 
printf("Введіть ім'я бінарного файлу: ");
gets(sf);
f=fopen(sf, " w+b"); //Відкриваємо файл для роботи з бінарними даними
if(f == NULL)
{
printf("Виникла помилка при створенні файлу \n"); 
while (!kbhit());
return 0;
}
printf("Введіть кількість рядків матриці: ");
cin>>n;
printf("Введіть кількість стовпчиків матриці: ");
cin>>m;
float v[m];
fwrite(&n, sizeof(int), 1, f); // Записуємо першим елементом кількість рядків матриці 
fwrite(&m, sizeof(int), 1, f); // Записуємо другим елементом кількість стовпчиків
for(i=0; i<n; i++)
{
for(j=0; j<m; j++)
{
x=(rand()%100-50.0)/5;
v[j]=x;
printf("%7.2f ", x);
}
fwrite(&v, sizeof(v), 1, f);
cout<<endl;
}
fclose(f); 
printf("Створено файл %s \n",sf);
while (!kbhit());
return 0;
}
int main()
{
system("cls");
SetConsoleCP(1251); 
SetConsoleOutputCP(1251); 
srand(time(NULL));
int p;
do
{
system("cls");
gotoxy(10,5);
cout << " Головне меню ";
gotoxy(10,7); cout << " 1. Створення та запис у перший текстовий файл матриці";
gotoxy(10,8); cout << " 2. Створення та запис у другий текстовий файл символьних рядків ";
gotoxy(10,9); cout << " 3. Створення та запис у перший бінарний файл матриці";
gotoxy(10,10); cout << " 4. Створення та запис у другий бінарний файл матриці";
gotoxy(10,12); cout << " 0. Вихід";
gotoxy(10,13); cout << " Введіть номер пункту : ";
cin >>p;
switch (p)
{
case 1:
{
p1();
break;
}
case 2:
{
p2();
break;
}
case 3:
{
p3();
break;
}
case 4:
{
p3();
break;
}
}
}
while (p != 0);
return 0;
}



