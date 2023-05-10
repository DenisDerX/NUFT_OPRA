#include "dll_lib4.h"
using namespace std;
void __declspec (dllexport) create(int* a, int* f, int n, int m) {
    int i, j, sum;
    for (j = 0; j < m; j++) {
        sum = 0;
        for (i = j + 1; i < n; i++) {
            if (i > j && *(a + i * m + j) < 0) {
                sum += *(a + i * m + j);
            }
        }
        *(f + j) = sum;
    }
}
