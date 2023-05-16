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

int main() {
    system("cls");
    srand(time(NULL));
    setlocale(LC_CTYPE, "ukr");
    int k = 0, n, min;
    p* begin = NULL;
    p* last = NULL;
    p* list = NULL;
    cout << "\n\n Введіть кількість елементів = ";
    cin >> n;
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
    cout << " Сформований список = \n";
    list = begin;
    while (list)
    {
        cout << " " << list->e;
        list = list->next;
    }
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

    begin = prev;

    cout << "\n Перетворений список = \n";
    list = begin;
    while (list)
    {
        cout << " " << list->e;
        list = list->next;
    }
    cout << "\n\n Кількість замін = " << k << endl;

    while (begin)
    {
        list = begin;
        begin = list->next;
        delete list;
    }
    return 0;
}
