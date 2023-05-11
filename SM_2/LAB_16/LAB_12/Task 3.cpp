#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

int main()
{ 
    system("cls");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ifstream f1;
    FILE *f2;
    char sf1[40], sf2[40];
    printf("������ ��'� �������� �����: ");
    gets(sf1);
    f1.open(sf1, ios::in | ios::binary);
    if(!f1)
    {
        printf("������� ������� ��� �������� ����� \n"); 
        return 0;
    } 
    printf("������ ��'� ����� ��� ���������� : ");
    gets(sf2); 
    f2=freopen(sf2, "w+", stdout);
    if(f2 == NULL)
    {
        printf("������� ������� ��� ������� ����� \n"); 
        return 0;
    }
    int i, j, n=0, m=0;
    f1.read((char *) &n, sizeof(n));
    f1.read((char *) &m, sizeof(m));
    float a[n][m]; 
    float r[n];
    float x;
    int count = 0; 

    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            f1.read((char *) &x, sizeof(x));
            a[i][j]=x;
            if(x > 0 && int(x) % 2 != 0) 
                count++;
        }

    printf("������� a[%d,%d]:\n",n,m); 
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++) 
            printf("%7.2f ",a[i][j]);
        printf("\n");
    }

    printf("\n ʳ������ �������� ������� ��������: %d\n", count); // �������� �������

    fclose(f2); 
    f1.close(); 
    return 0;
}

