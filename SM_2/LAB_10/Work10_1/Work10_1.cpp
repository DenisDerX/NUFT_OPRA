#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukr");
    srand(time(NULL));
    const int n = 10;
    int arr[n];
    int max = 0, index = 0;
    cout << "Згенерований масив: ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 - 40;
        cout << arr[i] << " ";
    }
    cout <<endl;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (index == -1 || arr[i] < max) {
                max = arr[i];
                index = i+1;
            }
        }
    }
    if (index != -1)
    {
        cout << "Максимальний від'ємний елемент: " << max << endl;
        cout << "Індекс елемента: " << index << endl;
    }
    else {
        cout << "В даному масиві відсутні від'ємні елементи: " << endl;
    }
    return 0;
}