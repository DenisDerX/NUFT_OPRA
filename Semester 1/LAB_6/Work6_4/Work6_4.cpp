#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main()
{
    int i,n, a[100];
    cout << "N=";
    cin >> n;
    a[0] = 1;
    a[1] = 1;
    for (i = 2; i < n + 2; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}