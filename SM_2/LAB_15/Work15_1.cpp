#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main()
{ 
system("cls");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
int i, j, n=0, m=0;
float x;
FILE *f1, *f2; // f1 - Вхідний файл, *f2 - Вихідний файл
char sf1[40], sf2[40];// Змінна для повного імені файлу
printf("Введіть ім'я вхідного файлу: ");
gets(sf1);
f1=fopen(sf1, "r+");// Відкриваємо файл для зчитування в текстовому режимі
if(f1 == NULL)
{
printf("Виникла помилка при відкритті файлу \n"); 
return 0;
}
fscanf(f1,"n=%d ", &n); // Зчитуємо кількість рядків матриці 
fscanf(f1,"m=%d ", &m); // Зчитуємо кількість стовпчиків матриці 
float a[n][m]; 
float r[m];
float sum=0.0;
int k;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
fscanf(f1, "%f ", &x); //Зчитуємо елементи матриці 
a[i][j]=x;
}
for (j = 0; j < m; j++)
{
    sum = 0.0;
    for (i = 0; i < n; i++)
    {
        if (a[i][j] <0) // перевіряємо, чи потрібно додавати цей елемент до суми
        {
            sum += a[i][j];
        }
    }
    r[j] = sum;
}

// Виведення на екран матриці та результатів обчислення
printf("Матриця a[%d,%d]:\n",n,m); 
for(i=0;i<n;i++)
{
for(j=0;j<m;j++) 
printf("%7.2f ",a[i][j]);
printf("\n");
}
printf("\n Масив r(%d): \n",m);
for (j = 0; j < m; j++)
printf("%7.2f ",r[j]);
printf("\n");
printf("\nВведіть ім'я файлу для результату: ");
gets(sf2);
f2=freopen(sf2, "w+", stdout); //Відкриваємо та перенаправляємо потік виведення у заданий файл
//Якщо вдалось відкрити та перенаправити потік виведення, то усе виведення буде записуватися у заданий файл і не виводитись на екран
if(f2== NULL)
{
printf("Виникла помилка при відкритті файлу \n"); 
return 0;
}
printf("Матриця a[%d,%d]:\n",n,m); 
for(i=0;i<n;i++)
{
for(j=0;j<m;j++) 
printf("%7.2f ",a[i][j]);
printf("\n");
}
printf("\n Масив r(%d): \n",m);
for (j = 0; j < m; j++)
printf("%7.2f ",r[j]);
printf("\n");
fclose(f2); 
fclose(f1); 
return 0;
}



