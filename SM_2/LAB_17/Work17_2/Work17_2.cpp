#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    srand(time(NULL));
    int n;
    int* arr;
    printf("Введіть розмір масиву: ");
    cin >> n;
    arr = (int*)malloc(n * sizeof(int));
    if (!arr)
    {
        printf(" Помилка при виділенні пам’яті\n");
        return 0;
    }

    printf("Вхідний одновимірний масив:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }
    printf("\n");
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (abs(arr[i]) > abs(max)) {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            arr[i] = max;
        }
    }
    printf("Модифікований масив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
