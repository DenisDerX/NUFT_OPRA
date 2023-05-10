#include <string>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{ 
    system("cls");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    FILE *f1, *f2;
    char sf1[40], sf2[40];
    char str[80];
    printf("Введіть ім'я вхідного файлу: ");
    gets(sf1);
    f1=fopen(sf1, "r+");
    if(f1 == NULL)
    {
        printf("Виникла помилка при відкритті файлу \n"); 
        return 0;
    }
    printf("Введіть ім'я файлу для результату : ");
    gets(sf2); 
    f2=freopen(sf2, "w+", stdout);
    if(f2 == NULL)
    {
        printf("Виникла помилка при відкритті файлу \n"); 
        return 0;
    }
    string s1;
    int i;
    while (!feof(f1))
    {
        fgets(str, 79, f1);
        s1=str;
        if (ferror(f1)) 
            printf("Виникла помилка зчитування!"); 
        for (i=0;i<(s1.size());i++)
        {
            if (s1[i] == '*')
            {
                s1[i] = '/';
            }
        }
        cout<<s1;
    }
    fclose(f2);
    fclose(f1);
    return 0; 
}

