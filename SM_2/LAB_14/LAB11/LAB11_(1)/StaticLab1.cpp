#include "StaticLab1.h"
void generateArray(int arr[], const int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 - 40;
    }
}

void printArray(int arr[], const int n) {
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printPositive(int arr[], const int n) {
    cout << "Відсортований масив додатніх елементів: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
