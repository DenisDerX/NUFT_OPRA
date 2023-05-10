#include "dll_lib2.h"
using namespace std;
void __declspec (dllexport) math(int *v, int nv) {
    int max = v[0];
    for (int i = 1; i < nv; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    for (int i = 0; i < nv; i++) {
        v[i] -= max;
    }
}
