#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;
int main()
{ 
system("cls");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
ifstream f1; //f - ������� �����
FILE *f2; // ��������� ������� �����
char sf1[40], sf2[40]; // ����� ��� ������� ���� �����
printf("������ ��'� �������� �����: ");
gets(sf1); 
f1.open(sf1, ios::in | ios::binary); //³�������� ���� � �������� ����� ��� ������ �����
if(!f1)
{
printf("������� ������� ��� �������� ����� \n"); 
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
f1.read((char *) &n, sizeof(n)); // �������� ������ ��������� ������� ����� ������� 
f1.read((char *) &m, sizeof(m)); // �������� ������ ��������� ������� ���������
float a[n][m]; 
float r[n];

float x;
for(i=0; i<n; i++)
for(j=0; j<m; j++)
{
f1.read((char *) &x, sizeof(x)); // �������� ������ ��������� ������� ����� ������� 
a[i][j]=x;
}
printf("������� a[%d,%d]:\n",n,m); 
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
cout << "³���������� �������:\n";
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

