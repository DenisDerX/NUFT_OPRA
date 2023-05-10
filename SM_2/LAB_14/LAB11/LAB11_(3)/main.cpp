#include "StaticLib3.h"
#include "dll_lib3.h"
using namespace std;

int main()
{
    system("cls");
    setlocale(LC_ALL, "Ukr");
    const int n = 4;
    int mat[n][n];
    createMatrix(mat, n);
    printMatrix(mat, n);
    sortMatrix(mat, n);
    cout << endl << "Відсортований масив:" << endl;
    printMatrix(mat, n);
    return 0;
}

