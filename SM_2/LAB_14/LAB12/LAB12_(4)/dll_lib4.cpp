#include "dll_lib4.h"
using namespace std;
int __declspec (dllexport) average(int* m, int nf, int mf, int index)
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < nf; i++) {
        int element = *(m + i * mf + index);
        if (element > 0) {
            sum += element;
            count++;
        }
    }
    if (count > 0) {
        return sum / count;
    }
    else {
        return 0;
    }
}

