#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <vector>

using namespace std;

class arr
{
public:
    int rows;
    int columns;
    void rande();
    void print();
    int min();
    int average();
    vector<int> diagonal();
    void sort();
private:
    vector<vector<int> > arr;
};

void arr::rande()
{
    srand(time(NULL));
    arr.resize(rows);
    for (int i = 0; i < rows; i++)
    {
        arr[i].resize(columns);
        for (int j = 0; j < columns; j++)
        {
            arr[i][j] = rand() % 100 - 50;
        }
    }
}

void arr::print()
{
    printf("Матриця:\n", rows, columns);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%4d", arr[i][j]);
        }
        cout << endl;
    }
}

int arr::min()
{
    int min = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}

int arr::average()
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (arr[i][j] > 0)
            {
                sum += arr[i][j];
                count++;
            }
        }
    }
    if (count > 0)
    {
        return sum / count;
    }
    return 0;
}

vector<int> arr::diagonal()
{
    vector<int> sums;
    sums.resize(columns - 1);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (j > i && arr[i][j] > 0)
            {
                sums[j - 1] += arr[i][j];
            }
        }
    }

    return sums;
}

void arr::sort()
{
    for (int j = 1; j < columns; j += 2)
    {
        int i = 1;
        while (i < rows)
        {
            if (arr[i][j] < arr[i - 1][j])
            {
                swap(arr[i][j], arr[i - 1][j]);
                if (i > 1)
                {
                    i--;
                }
            }
            else
            {
                i++;
            }
        }
    }
}

int main()
{
    system("cls");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    arr r1;
    cout << endl
         << "Введіть кількість рядків матриці: ";
    cin >> r1.rows;
    cout << "Введіть кількість стовпців матриці: ";
    cin >> r1.columns;
    r1.rande();
    r1.print();
    int min = r1.min();
    cout << "Мінімальний елемент матриці: " << min << endl;
    int average = r1.average();
    cout << "Середнє арифметичне значення додатніх елементів матриці: " << average << endl;
    vector<int> diagonal = r1.diagonal();
    cout << "Масив діагоналей: ";
    for (int i = 0; i < diagonal.size(); i++)
    {
        cout << diagonal[i] << " ";
    }
    cout << endl;
    
    r1.sort();
    cout << "Матриця після сортування непарних стовпців за зростанням:" << endl;
    r1.print();
    
    system("pause");
    return 0;
}

