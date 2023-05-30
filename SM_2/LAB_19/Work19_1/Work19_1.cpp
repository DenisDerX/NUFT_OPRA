#include <time.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <windows.h>
#include <iostream>

using namespace std;

struct node
{
    int x;
    node* l;
    node* r;
};

void show_childr(node* mt)
{
    if (mt != nullptr)
    {
        cout << "Вузол " << mt->x << ";\n";
        show_childr(mt->l);
        show_childr(mt->r);
    }
}

int count_non_leaf_nodes(node* mt)
{
    if (mt == nullptr || (mt->l == nullptr && mt->r == nullptr))
        return 0;
    return 1 + count_non_leaf_nodes(mt->l) + count_non_leaf_nodes(mt->r);
}

int sum_positive_values(node* mt)
{
    if (mt == nullptr)
        return 0;
    int sum = 0;
    if (mt->x > 0)
        sum += mt->x;
    sum += sum_positive_values(mt->l);
    sum += sum_positive_values(mt->r);
    return sum;
}

void add_node_tree(int x, node*& mt)
{
    if (mt == nullptr)
    {
        mt = new node;
        mt->x = x;
        mt->l = nullptr;
        mt->r = nullptr;
    }
    else
    {
        if (count_non_leaf_nodes(mt->l) < count_non_leaf_nodes(mt->r))
        {
            if (mt->l != nullptr)
                add_node_tree(x, mt->l);
            else
            {
                mt->l = new node;
                mt->l->l = nullptr;
                mt->l->r = nullptr;
                mt->l->x = x;
            }
        }
        else
        {
            if (mt->r != nullptr)
                add_node_tree(x, mt->r);
            else
            {
                mt->r = new node;
                mt->r->l = nullptr;
                mt->r->r = nullptr;
                mt->r->x = x;
            }
        }
    }
}

int main()
{
    setlocale(LC_CTYPE, "ukr");
    const int n = 15;
    int i;
    int el[n];

    cout << "Введіть " << n << " елементів для дерева: ";
    for (i = 0; i < n; i++)
    {
        cin >> el[i];
    }

    node* tree = nullptr;
    cout << "\nБудуємо дерево\n";
    i = 0;
    while (i < n)
    {
        add_node_tree(el[i], tree);
        i++;
    }

    cout << "\nЗгенеровані вузли дерева:\n";
    show_childr(tree);

    int non_leaf_nodes = count_non_leaf_nodes(tree);
    cout << "Кількість не граничних вузлів дерева: " << non_leaf_nodes << endl;

    int sum_positive = sum_positive_values(tree);
    cout << "Сума додатних значень вузлів: " << sum_positive << endl;

    delete tree;
    return 0;
}
