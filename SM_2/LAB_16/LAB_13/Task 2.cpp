#include <conio.h>
#include <time.h>
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
int main()
{ 
system("cls");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
int i, j, n=0, m=0;
float x;
fstream f1; //f1 - ¬х≥дний файл
FILE *f2; //f2 - ¬их≥дний файл
char sf1[40], sf2[40];// «м≥нна дл€ повного ≥мен≥ файлу
printf("¬вед≥ть ≥м'€ вх≥дного файлу: ");
gets(sf1);
f1.open(sf1); //¬≥дкриваЇмо файл дл€ зчитуванн€ в текстовому режим≥
if(!f1)
{
printf("¬иникла помилка при в≥дкритт≥ файлу \n"); 
return 0;
}
f1>>n; // «читуЇмо к≥льк≥сть р€дк≥в матриц≥ 
f1>>m; // «читуЇмо к≥льк≥сть стовпчик≥в матриц≥ 
float a[n][m];
float r[m];
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
f1>>x; //«читуЇмо елементи матриц≥ 
a[i][j]=x;
}
printf("\n¬вед≥ть ≥м'€ файлу дл€ результату: ");
gets(sf2);
f2=freopen(sf2, "w+", stdout); //в≥дкриваЇмо та перенаправл€Їмо пот≥к виведенн€ у заданий файл
//якщо вдалось в≥дкрити та перенаправити пот≥к виведенн€, то виведенн€ буде записуватись у заданий файл ≥ не виводитись на екран
if(f2== NULL)
{
printf("¬иникла помилка при в≥дкритт≥ файлу \n"); 
return 0;
}
// ¬иведенн€ матриц≥ та результат≥в обчисленн€
printf("ћатриц€ a[%d,%d]:\n",n,m); 
for(i=0;i<n;i++)
{
for(j=0;j<m;j++) 
{
printf("%7.2f ",a[i][j]);
}
printf("\n");
}
float min= a[0][0];
for (i = 0; i < n; i++)
{
    for (j = 0; j < m; j++)
    {
        if (a[i][j] < min)
        {
            min = a[i][j];
        }
    }
}
for (i = 0; i < n; i++)
{
    for (j = 0; j < m; j++)
    {
        if (a[i][j] == 0)
        {
            a[i][j] = min;
        }
    }
}
printf("–едагована матриц€ a[%d,%d]:\n",n,m); 
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++) 
    {
        printf("%7.2f ",a[i][j]);
    }
    printf("\n");
}
f1.close();
fclose(f2); 
return 0;
}

