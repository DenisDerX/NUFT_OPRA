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
FILE *f1, *f2; // f1 - ������� ����, *f2 - �������� ����
char sf1[40], sf2[40];// ����� ��� ������� ���� �����
printf("������ ��'� �������� �����: ");
gets(sf1);
f1=fopen(sf1, "r+");// ³�������� ���� ��� ���������� � ���������� �����
if(f1 == NULL)
{
printf("������� ������� ��� ������� ����� \n"); 
return 0;
}
fscanf(f1,"n=%d ", &n); // ������� ������� ����� ������� 
fscanf(f1,"m=%d ", &m); // ������� ������� ��������� ������� 
float a[n][m]; 
float r[m];
float sum=0.0;
int k;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
fscanf(f1, "%f ", &x); //������� �������� ������� 
a[i][j]=x;
}
for (j = 0; j < m; j++)
{
    sum = 0.0;
    for (i = 0; i < n; i++)
    {
        if (a[i][j] <0) // ����������, �� ������� �������� ��� ������� �� ����
        {
            sum += a[i][j];
        }
    }
    r[j] = sum;
}

// ��������� �� ����� ������� �� ���������� ����������
printf("������� a[%d,%d]:\n",n,m); 
for(i=0;i<n;i++)
{
for(j=0;j<m;j++) 
printf("%7.2f ",a[i][j]);
printf("\n");
}
printf("\n ����� r(%d): \n",m);
for (j = 0; j < m; j++)
printf("%7.2f ",r[j]);
printf("\n");
printf("\n������ ��'� ����� ��� ����������: ");
gets(sf2);
f2=freopen(sf2, "w+", stdout); //³�������� �� ��������������� ���� ��������� � ������� ����
//���� ������� ������� �� ������������� ���� ���������, �� ��� ��������� ���� ������������ � ������� ���� � �� ���������� �� �����
if(f2== NULL)
{
printf("������� ������� ��� ������� ����� \n"); 
return 0;
}
printf("������� a[%d,%d]:\n",n,m); 
for(i=0;i<n;i++)
{
for(j=0;j<m;j++) 
printf("%7.2f ",a[i][j]);
printf("\n");
}
printf("\n ����� r(%d): \n",m);
for (j = 0; j < m; j++)
printf("%7.2f ",r[j]);
printf("\n");
fclose(f2); 
fclose(f1); 
return 0;
}



