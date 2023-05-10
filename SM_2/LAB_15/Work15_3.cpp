#include <iostream>
#include <windows.h>
#include <algorithm>
using namespace std;

int main()
{ 
    system("cls");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    FILE *f1, *f2; // Оголошуємо файлову змінну
    char sf1[40], sf2[40]; // Змінна для повного імені файлу
    printf("Введіть ім'я вхідного файлу: ");
    gets(sf1);
    f1=fopen(sf1, "r+b");
    if(f1 == NULL)
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
    int i, j, n=0, m=0;
    fread(&n, sizeof(int), 1, f1);
    fread(&m, sizeof(int), 1, f1);
    float a[n][m]; 
    float x;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            fread(&x, sizeof(float), 1, f1);
            a[i][j]=x;
        }
    printf("Матриця a[%d,%d]:\n",n,m); 
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++) 
            printf("%7.2f ",a[i][j]);
        printf("\n");
    }
    
    // Сортування елементів матриці
    sort(&a[0][0], &a[0][0] + n * m);
    
    printf("\n Відсортована матриця a[%d,%d]:\n",n,m); 
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++) 
            printf("%7.2f ",a[i][j]);
        printf("\n");
    }
    
    fclose(f2);
    fclose(f1);
    return 0;
}

