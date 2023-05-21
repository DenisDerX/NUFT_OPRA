#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <windows.h>

using namespace std;

struct p
{
    int e;
    p* next;
};
p* arr(int n)
{
    srand(time(NULL));
    p* begin = NULL;
    p* last = NULL;
    p* list = NULL;

    while (n > 0)
    {
        last = new p;
        last->e = rand() % 100 - 40;

        if (begin == NULL)
        {
            last->next = NULL;
            begin = last;
        }
        else
        {
            last->next = NULL;
            list->next = last;
        }

        list = last;
        n--;
    }

    return begin;
}
void print(p* list)
{
    while (list)
    {
        cout << " " << list->e;
        list = list->next;
    }
}
p* rev(p* begin, int& k)
{
    p* prev = NULL;
    p* current = begin;
    p* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        k++;
    }

    return prev;
}
void del(p* begin)
{
    while (begin)
    {
        p* list = begin;
        begin = list->next;
        delete list;
    }
}
int main() {
    system("cls");
    setlocale(LC_CTYPE, "ukr");
    int k = 0, n;
    p* begin = NULL;
    cout << "\n\n Введіть кількість елементів = ";
    cin >> n;
    begin = arr(n);
    cout << " Сформований список = \n";
    print(begin);
    begin = rev(begin, k);
    cout << "\n Перетворений список = \n";
    print(begin);
    cout << "\n\n Кількість замін = " << k << endl;
    del(begin);
    return 0;
}
