#include "dll_lib2.h"
#include <utility>

using namespace std;

void __declspec (dllexport) gnome_sort(int arr[], int n) {
    int i = 0;
    while (i < n) {
        if (i == 0 || arr[i] >= arr[i - 1])
            i++;
        else {
            swap(arr[i], arr[i - 1]);
            i--;
        }
    }
}
