#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
int main()
{ 
system("cls");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
float x;
fstream f1; //f1 - ������� ����
FILE *f2; // ��������� ������� �����
char sf1[40], sf2[40]; // ����� ��� ������� ���� �����
char str[80]; // ����� ��� ���������� ����������� ����� � �����
printf("������ ��'� �������� �����: ");
gets(sf1);
f1.open(sf1); //³�������� ���� ��� ���������� � ���������� �����
if(!f1)
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
string s1; // ����� ��� ����������� �����
string s2(" */+-"); // ����� ��� ����� ������� ����������� �����
int i, p;
while (!f1.eof()) //���������� ���� ���������� �� ��� ��, ���� �� ������ �� ���� �����
{
f1.getline(str, sizeof(str));
s1=str;
for (i=0;i<(s1.size());i++)
{
if (s1[i] == '*')
{
s1[i] = '/';
}
}
cout<<s1<<"\n";
}
fclose(f2); 
f1.close();
return 0; 
}
