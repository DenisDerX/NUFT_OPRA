#include "dll_lib1.h"
using namespace std;
void  __declspec (dllexport) sortPositive(int arr[], const int n) {
    int tmp;
    for (int i = 0; i < n; i += 2)
    {
        for (int j = i + 2; j < n; j += 2)
        {
            if (arr[i] > 0 && arr[j] > 0 && arr[i] < arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
