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
fstream f1; //f1 - ������� ����
FILE *f2; //f2 - �������� ����
char sf1[40], sf2[40];// ����� ��� ������� ���� �����
printf("������ ��'� �������� �����: ");
gets(sf1);
f1.open(sf1); //³�������� ���� ��� ���������� � ���������� �����
if(!f1)
{
printf("������� ������� ��� ������� ����� \n"); 
return 0;
}
f1>>n; // ������� ������� ����� ������� 
f1>>m; // ������� ������� ��������� ������� 
float a[n][m]; 
float r[m];
float sum=0.0;
int k;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
f1>>x; //������� �������� ������� 
a[i][j]=x;
}
for (j = 0; j < m; j++)
{
sum=0.0;
k=0;
for (i = 0; i < n; i++)
{
if (a[i][j]>0)
{
sum = sum + a[i][j];
k++;
}
}
if (0<k)
r[j]=sum/k;
else 
r[j]=0;
}
printf("\n������ ��'� ����� ��� ����������: ");
gets(sf2);
f2=freopen(sf2, "w+", stdout); //³�������� �� ��������������� ���� ��������� � ������� ����
//���� ������� ������� �� ������������� ���� ���������, �� ��������� ���� ������������ � ������� ���� � �� ���������� �� �����
if(f2== NULL)
{
printf("������� ������� ��� ������� ����� \n"); 
return 0;
}
// ��������� ������� �� ���������� ����������
printf("������� a[%d,%d]:\n",n,m); 
for(i=0;i<n;i++)
{
for(j=0;j<m;j++) 
{
printf("%7.2f ",a[i][j]);
}
printf("\n");
}
printf("\n ����� r(%d): \n",m);
for (j = 0; j < m; j++)
{
printf("%7.2f ",r[j]);
}
printf("\n");
f1.close();
fclose(f2); 
return 0;
}

