#include "StaticLab1.h"
#include "dll_lib1.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukr");
    system("cls");
    const int n = 10;
    int arr[n];
    generateArray(arr, n);
    cout << "«генерований масив: ";
    printArray(arr, n);
    sortPositive(arr, n);
    printPositive(arr, n);
    system("pause");
    return 0;
}

