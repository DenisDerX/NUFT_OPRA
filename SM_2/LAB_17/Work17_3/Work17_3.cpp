#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    srand(time(NULL));
    int n, m;
    cout << "Введіть кількість рядків: ";
    cin >> n;
    cout << "Введіть кількість стовпчиків: ";
    cin >> m;
    int** arr = new int* [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 101-60;
        }
    }
    cout << "Вхідна матриця:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    for (int i = n / 2; i < m; i++) {
        int dob = 1;
        for (int j = 0; j < n; j++) {
            if (arr[i][j] < 0) {
                dob*= abs(arr[i][j]);
            }
        }
        cout << "Добуток відємниї елементів за модулем у " << i+1 << " рядку: " << dob << endl;
    }
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
