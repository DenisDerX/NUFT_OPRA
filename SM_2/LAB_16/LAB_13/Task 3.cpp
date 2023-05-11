#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
int main()
{ 
system("cls");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
ifstream f1; //f - Файлова змінна
FILE *f2; // оголошуємо файлову змінну
char sf1[40], sf2[40]; // змінна для повного імені файлу
printf("Введіть ім'я вхідного файлу: ");
gets(sf1); 
f1.open(sf1, ios::in | ios::binary); //Відкриваємо файл у бінарному режимі для запису даних
if(!f1)
{
printf("Виникла помилка при створенні файлу \n"); 
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
int i, j, n=0, m=0;
f1.read((char *) &n, sizeof(n)); // Записуємо першим елементом кількість рядків матриці 
f1.read((char *) &m, sizeof(m)); // Записуємо другим елементом кількість стовпчиків
float a[n][m]; 
float r[n];

float x;
for(i=0; i<n; i++)
for(j=0; j<m; j++)
{
f1.read((char *) &x, sizeof(x)); // записуємо першим елементом кількість рядків матриці 
a[i][j]=x;
}
printf("Матриця a[%d,%d]:\n",n,m); 
for(i=0; i<n; i++)
{
for(j=0; j<m; j++) 
printf("%7.2f ",a[i][j]);
printf("\n");
}
for (i = 0; i < n; i++) {
  for (j = 0; j < m; j++) {
    if (i <= n/2 && j <= m/2) { 
      for (int k = j+1; k < m; k++) {
        if (a[i][k] < a[i][j]) { 
          swap(a[i][j], a[i][k]);
        }
      }
    }
  }
}
cout << "Відсортована матриця:\n";
for (int i = 0; i < n; i++) {
  for (int j = 0; j < m; j++) {
    printf("%7.2f ",a[i][j]);;
  }
  cout << endl;
}
fclose(f2); 
f1.close(); 
return 0;
}

