#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    srand(time(NULL));
    int n, m;
    cout << "Введіть кількість рядків: ";
    cin >> n;
    cout << "Введіть кількість стовпців: ";
    cin >> m;

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[m];
        for (int j = 0; j < m; j++) {
            matrix[i][j] = rand() % 100;
        }
    }
    cout << "Матриця:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
 
    double geo = 1.0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] % 2 != 0) { 
                geo *= matrix[i][j];
                count++;
            }
        }
    }

    if (count > 0) {
        geo = pow(geo, 1.0 / count);
        cout << "Середнє геометричне значення індексів непарних елементів: " << geo << endl;
    }
    else {
        cout << "У матриці немає непарних елементів" << endl;
    }


    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
