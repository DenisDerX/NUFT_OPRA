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
fstream f1; //f1 - Вхідний файл
FILE *f2; //f2 - Вихідний файл
char sf1[40], sf2[40];// Змінна для повного імені файлу
printf("Введіть ім'я вхідного файлу: ");
gets(sf1);
f1.open(sf1); //Відкриваємо файл для зчитування в текстовому режимі
if(!f1)
{
printf("Виникла помилка при відкритті файлу \n"); 
return 0;
}
f1>>n; // Зчитуємо кількість рядків матриці 
f1>>m; // Зчитуємо кількість стовпчиків матриці 
float a[n][m]; 
float r[m];
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
f1>>x; //Зчитуємо елементи матриці 
a[i][j]=x;
}

printf("\nВведіть ім'я файлу для результату: ");
gets(sf2);
f2=freopen(sf2, "w+", stdout); //Відкриваємо та перенаправляємо потік виведення у заданий файл
//Якщо вдалось відкрити та перенаправити потік виведення, то виведення буде записуватись у заданий файл і не виводитись на екран
if(f2== NULL)
{
printf("Виникла помилка при відкритті файлу \n"); 
return 0;
}
// Виведення матриці та результатів обчислення
printf("Матриця a[%d,%d]:\n",n,m); 
for(i=0;i<n;i++)
{
for(j=0;j<m;j++) 
{
printf("%7.2f ",a[i][j]);
}
printf("\n");
}
for (i = 0; i < n; i++)
{
    int k = 0; 
    float sum = 0.0; 
    for (j = 0; j < m; j++)
    {
        if (a[i][j] > 0)
        {
            k++;
            sum += j;
        }
    }
        printf("У рядку %d кількість додатніх елементів: %d, сума індексів додатніх елементів: %.0f\n", i+1, k, sum);
    }
printf("\n");
f1.close();
fclose(f2); 
return 0;
}

