#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

void gotoxy(int xp, int yp) 
{
COORD new_xy;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
new_xy.X = xp; new_xy.Y = yp;
SetConsoleCursorPosition(hStdOut,new_xy);
}
//������� ��������� ����� �� ����� ��������
int p1() 
{
system("cls");
int i, j, n=0, m=0;
float x;
FILE *f; //f - ������� �����
char sf[40];// ����� ��� ������� ���� �����
cin.ignore(1,'\n'); 
printf("������ ��'� ������� ���������� �����: ");
gets(sf);
f=fopen(sf, " w+"); // ³�������� ���� ��� ������ � ���������� �����
if(f == NULL)
{
printf("������� ������� ��� �������� ����� \n"); 
while (!kbhit());
return 0;
}
printf("������ ������� ����� �������: ");
cin>>n;
printf("������ ������� ��������� �������: ");
cin>>m;
fprintf(f, "n=%d ", n); // �������� ������� ����� �������
fprintf(f, "m=%d \n", m); // �������� ������� ��������� �������
for(i=0; i<n; i++)
{
for(j=0; j<(m-1); j++)
{
x=(rand()%100-50.0)/5;
printf("%7.2f ", x);
fprintf(f, "%7.2f ", x);
}
x=(rand()%100-50.0)/5;
printf("%7.2f \n", x);
fprintf(f, "%7.2f \n", x);
}
fclose(f); 
printf("�������� ���� %s \n",sf);
while (!kbhit());
return 0;
}
//��������� ��������� �� ����� � ���� ����������� �����
int p2() 
{
system("cls");
int i, m, k=0;
FILE *f; // ��������� ������� �����
char sf[40]; // ����� ��� ������� ���� �����
char str[77];
cin.ignore(1,'\n'); 
printf("������ ��'� ������� ���������� �����: ");
gets(sf);
f=fopen(sf, "w+");// ³�������� ���� ��� ����������� � ���������� �����
if(f == NULL)
{
printf("������� ������� ��� �������� ����� \n"); 
while (!kbhit());
return 0;
}
printf("��� ���������� ������ ������� �����\n");
do
{
printf("%d: ", k);
gets(str);
if (!*str) break;
m=strlen(str);
k++;
for(i=0;i<m;i++)
putc(str[i],f);
putc('\0',f);
putc('\n',f);
}
while(*str); 
printf("\n"); 
fclose(f); // ��������� ����
printf("�������� ���� %s \n",sf);
while (!kbhit());
return 0;
}
//��������� ��������� �� ������ � ���� ������� �� ���������
int p3() 
{
system("cls");
int i, j, n=0, m=0;
float x;
FILE *f; //f - ������� ����
char sf[40];// ����� ��� ������� ���� �����
cin.ignore(1,'\n'); 
printf("������ ��'� �������� �����: ");
gets(sf);
f=fopen(sf, " w+b"); //³�������� ���� ��� ������ � �������� ������
if(f == NULL)
{
printf("������� ������� ��� �������� ����� \n"); 
while (!kbhit());
return 0;
}
printf("������ ������� ����� �������: ");
cin>>n;
printf("������ ������� ��������� �������: ");
cin>>m;
fwrite(&n, sizeof(int), 1, f); // �������� ������ ��������� ������� ����� ������� 
fwrite(&m, sizeof(int), 1, f); // �������� ������ ��������� ������� ���������
for(i=0; i<n; i++)
{
for(j=0; j<m; j++)
{
x=(rand()%100-50.0)/5;
printf("%7.2f ", x);
fwrite(&x, sizeof(float), 1, f);
}
cout<<endl;
}
fclose(f); 
printf("�������� ���� %s \n",sf);
while (!kbhit());
return 0;
}
//��������� ��������� �� ������ � ���� ������� �� ������
int p4() 
{
system("cls");
int i, j, n=0, m=0;
float x;
FILE *f; //f - ������� ����
char sf[40];// ����� ��� ������� ���� �����
cin.ignore(1,'\n'); 
printf("������ ��'� �������� �����: ");
gets(sf);
f=fopen(sf, " w+b"); //³�������� ���� ��� ������ � �������� ������
if(f == NULL)
{
printf("������� ������� ��� �������� ����� \n"); 
while (!kbhit());
return 0;
}
printf("������ ������� ����� �������: ");
cin>>n;
printf("������ ������� ��������� �������: ");
cin>>m;
float v[m];
fwrite(&n, sizeof(int), 1, f); // �������� ������ ��������� ������� ����� ������� 
fwrite(&m, sizeof(int), 1, f); // �������� ������ ��������� ������� ���������
for(i=0; i<n; i++)
{
for(j=0; j<m; j++)
{
x=(rand()%100-50.0)/5;
v[j]=x;
printf("%7.2f ", x);
}
fwrite(&v, sizeof(v), 1, f);
cout<<endl;
}
fclose(f); 
printf("�������� ���� %s \n",sf);
while (!kbhit());
return 0;
}
int main()
{
system("cls");
SetConsoleCP(1251); 
SetConsoleOutputCP(1251); 
srand(time(NULL));
int p;
do
{
system("cls");
gotoxy(10,5);
cout << " ������� ���� ";
gotoxy(10,7); cout << " 1. ��������� �� ����� � ������ ��������� ���� �������";
gotoxy(10,8); cout << " 2. ��������� �� ����� � ������ ��������� ���� ���������� ����� ";
gotoxy(10,9); cout << " 3. ��������� �� ����� � ������ ������� ���� �������";
gotoxy(10,10); cout << " 4. ��������� �� ����� � ������ ������� ���� �������";
gotoxy(10,12); cout << " 0. �����";
gotoxy(10,13); cout << " ������ ����� ������ : ";
cin >>p;
switch (p)
{
case 1:
{
p1();
break;
}
case 2:
{
p2();
break;
}
case 3:
{
p3();
break;
}
case 4:
{
p3();
break;
}
}
}
while (p != 0);
return 0;
}



