#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "ukr");
    srand(time(NULL));
    int i, j, n, m;
    int* a, *k;
    cout << "Введіть кількість рядків матриці ";
    cin >> n;
    m = n;
    a = (int*)calloc(n * m, sizeof(int));
    if (!a)
    {
        printf("Помилка при виділенні пам'яті\n");
        return 0;
    }
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            *(a + i * m + j) = rand() % 100 - 50;

    printf("Матриця a[%d][%d]:\n", n, m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            printf("%3d ", *(a + i * m + j));
        printf("\n");
    }

    k = (int*)calloc(n, sizeof(int));
    if (!k)
    {
        printf("Помилка при виділенні пам'яті\n");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (*(a + i * m + j) > 0)
                *(k + i) += 1;
        }
    }

    printf("Кількість додатніх елементів у кожному рядку:\n");
    for (i = 0; i < n; i++)
        printf("%d ", *(k + i));
    printf("\n");

    free(a);
    free(k);
    return 0;
}
