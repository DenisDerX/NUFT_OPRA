#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    system("cls");
    setlocale(LC_ALL, "Ukr");
    srand(time(NULL));
    const int n = 4;
    int mat[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = rand() % 100-40;
        }
    }
    cout << "Початкова матриця:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

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

    cout << endl << "Відсортований масив:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
