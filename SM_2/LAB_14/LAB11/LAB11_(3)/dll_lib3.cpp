#include "dll_lib3.h"
using namespace std;
void __declspec (dllexport) sortMatrix(int mat[][4], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1 && mat[i][j] < 0) {
                for (int k = 0; k < i; k++) {
                    if (mat[k][k] < 0 && mat[k][k] < mat[i][j]) {
                        int temp = mat[k][k];
                        mat[k][k] = mat[i][j];
                        mat[i][j] = temp;
                    }
                }
            }
        }
    }
}

