#include <conio.h>
#include <time.h>
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

void gotoxy(int xp, int yp) 
{
COORD new_xy;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
new_xy.X = xp; new_xy.Y = yp;
SetConsoleCursorPosition(hStdOut,new_xy);
}

//������� ��������� ����� �� �����
int p1() 
{
system("cls");
int i, j, n=0, m=0;
float x;
ofstream f; //f - ������� ����
char sf[40];// ����� ��� ������� ���� �����
cin.ignore(1,'\n'); 
printf("������ ��'� ������� ���������� �����: ");
gets(sf);
f.open(sf);
if(!f)
{
printf("������� ������� ��� �������� ����� \n"); 
while (!kbhit());
return 0;
}
printf("������ ������� ����� �������: ");
cin>>n;
printf("������ ������� ��������� �������: ");
cin>>m;
f<<n<<"\n";
f<<m<<"\n";
for(i=0; i<n; i++)
{
for(j=0; j<m; j++)
{
x=(rand()%100-50.0)/5;
printf("%7.2f ", x);
f<<x<<"\t";
}
f<<"\n";
cout<<endl;
}
f.close(); 
printf("\n�������� ���� %s \n",sf);
while (!kbhit());
return 0;
}
//��������� ��������� �� ����� � ���� ����������� �����
int p2() 
{
system("cls");
int i, k=0, m;
ofstream f; //f - ������� ����
char sf[40];// ����� ��� ������� ���� �����
char str[77];
cin.ignore(1,'\n'); 
printf("������ ��'� ������� ���������� �����: ");
gets(sf);
f.open(sf);
if(!f)
{
printf("������� ������� ��� �������� ����� \n"); 
while (!kbhit());
return 0;
}
printf("��� ���������� ������ ������� �����\n");
do
{
printf("%d: ", i);
gets(str);
if (!*str) break;
m=strlen(str);
f<<str<<'\0'<<'\n';
}
while(*str); 
f.close(); 
printf("\n�������� ���� %s \n",sf);
while (!kbhit());
return 0;
}
//��������� ��������� �� ������ � ���� ������� �� ���������
int p3() 
{
system("cls");
int i, j, n=0, m=0;
float x;
ofstream f; //f - ������� ����
char sf[40];// ����� ��� ������� ���� �����
cin.ignore(1,'\n'); 
printf("������ ��'� �������� �����: ");
gets(sf);
f.open(sf, ios::out | ios::binary); //³�������� ���� � �������� ����� ��� ������ �����
if(!f)
{
printf("������� ������� ��� �������� ����� \n"); 
while (!kbhit());
return 0;
}
printf("������ ������� ����� �������: ");
cin>>n;
printf("������ ������� ��������� �������: ");
cin>>m;
f.write((char *) &n, sizeof(n)); // �������� ������ ��������� ������� ����� ������� 
f.write((char *) &m, sizeof(m)); // �������� ������ ��������� ������� ���������
for(i=0; i<n; i++)
{
for(j=0; j<m; j++)
{
x=(rand()%100-50.0)/5;
printf("%7.2f ", x);
f.write((char *) &x, sizeof(x));
}
cout<<endl;
}
f.close(); 
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
ofstream f; //f - ������� ����
char sf[40];// ����� ��� ������� ���� �����
cin.ignore(1,'\n');
printf("������ ��'� �������� �����: ");
gets(sf);
f.open(sf, ios::out | ios::binary); //³�������� ���� � �������� ����� ��� ������ �����
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
f.write((char *) &n, sizeof(n)); // �������� ������ ��������� ������� ����� ������� 
f.write((char *) &m, sizeof(m)); // �������� ������ ��������� ������� ���������
float v[m];
for(i=0; i<n; i++)
{
for(j=0; j<m; j++)
{
x=(rand()%100-50.0)/5;
v[j]=x;
printf("%7.2f ", x);
}
f.write((char *) &v, sizeof(v));
cout<<endl;
}
f.close(); 
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
gotoxy(10,7); 
cout << " 1. ��������� �� ����� � ������ ��������� ���� �������";
gotoxy(10,8);
cout << " 2. ��������� �� ����� � ������ ��������� ���� ���������� ����� ";
gotoxy(10,9);
cout << " 3. ��������� �� ����� � ������ ������� ���� �������";
gotoxy(10,10);
cout << " 4. ��������� �� ����� � ������ ������� ���� �������";
gotoxy(10,12);
cout << " 0. �����";
gotoxy(10,13);
cout << " ������ ����� ������ : ";
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

