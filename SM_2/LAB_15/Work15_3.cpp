#include <iostream>
#include <windows.h>
#include <algorithm>
using namespace std;

int main()
{ 
    system("cls");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    FILE *f1, *f2; // ��������� ������� �����
    char sf1[40], sf2[40]; // ����� ��� ������� ���� �����
    printf("������ ��'� �������� �����: ");
    gets(sf1);
    f1=fopen(sf1, "r+b");
    if(f1 == NULL)
    {
        printf("������� ������� ��� ������� ����� \n"); 
        return 0;
    }
    printf("������ ��'� ����� ��� ���������� : ");
    gets(sf2);
    f2=freopen(sf2, "w+", stdout); //³�������� �� ��������������� ���� ��������� � ������� ����
    if(f2 == NULL)
    {
        printf("������� ������� ��� ������� ����� \n"); 
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
    printf("������� a[%d,%d]:\n",n,m); 
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++) 
            printf("%7.2f ",a[i][j]);
        printf("\n");
    }
    
    // ���������� �������� �������
    sort(&a[0][0], &a[0][0] + n * m);
    
    printf("\n ³���������� ������� a[%d,%d]:\n",n,m); 
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

