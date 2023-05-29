#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <vector>

using namespace std;

class vec
{
public:
    int n;
    void rande();
    void print();
    int countp();
    void element(int number);
    void changeindex();
    void sort();

private:
    int e[100]; 
};
void vec::rande()
{
    srand(time(NULL));
    int i;
    for (i = 0; i < n; i++)
        e[i] = rand() % 100 - 50;
}

void vec::print()
{
    int i;
    printf("Сформований масив: \n", n);
    for (i = 0; i < n; i++)
        printf(" %d", e[i]); 
    cout << endl;
}

int vec::countp()
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (e[i] > 0)
            count++;
    }
    return count;
}
void vec::element(int number)
{
    cout << "Елементи, менші за " << number << " та їх індекси: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (e[i] < number)
            cout << "Елемент: " << e[i] << ", Індекс: " << i << endl;
    }
}
void vec::changeindex()
{
    for (int i = 0; i < n; i++)
    {
        if (e[i] % 2 == 0)
            e[i] = i;
    }
}
void vec::sort()
{
    vector<int> positive;
    int count = 0;
    for (int i = 1; i < n; i += 2)
    {
        if (e[i] > 0)
        {
            positive.push_back(e[i]);
            count++;
        }
    }
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (positive[j] > positive[i])
            {
                int tmp = positive[i];
                positive[i] = positive[j];
                positive[j] = tmp;
            }
        }
    }
    int index = 1;
    for (int i = 0; i < count; i++)
    {
        e[index] = positive[i];
        index += 2;
    }
}
int main()
{
    system("cls");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    vec r1;
    cout << endl << "Введіть кількість елементів масиву = ";
    cin >> r1.n;
    r1.rande();
    r1.print();
    cout << "Кількість додатніх елементів: " << r1.countp() << endl;
    int number;
    cout << "Введіть число: ";
    cin >> number;
    r1.element(number);
    r1.changeindex();
    cout << "Масив після заміни парних елементів на їх індекси: " << endl;
    r1.print();
    r1.sort();
    cout << "Відсортований масив: " << endl;
    r1.print();
    system("pause");
    return 0;
}

