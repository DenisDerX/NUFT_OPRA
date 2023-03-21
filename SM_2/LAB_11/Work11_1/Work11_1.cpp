#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukr");
    system("cls");
    srand(time(NULL));
    const int n = 10;
    int arr[n];
    int i, j, tmp;
    cout << "Згенерований масив: ";
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 - 40;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (i = 0; i < n; i += 2)
    {
        for (j = i + 2; j < n; j += 2)
        {
            if (arr[i] > 0 && arr[j] > 0 && arr[i] < arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    cout << "Відсортований масив додатніх елементів: ";
    for (i = 0; i < n; i++)
    {
        if (arr[i] > 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    system("pause");
    return 0;
}
