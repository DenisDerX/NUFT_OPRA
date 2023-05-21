#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct p {
    int e;
    p* next;
};

void print(p* list) {
    while (list) {
        cout << list->e << " ";
        list = list->next;
    }
}

void sort(p*& stack) {
    if (!stack || !stack->next) {
        return;
    }

    p* tempStack = nullptr;

    while (stack) {
        p* current = stack;
        stack = stack->next;

        if (!tempStack || current->e < tempStack->e) {
            current->next = tempStack;
            tempStack = current;
        }
        else {
            p* temp = tempStack;
            while (temp->next && current->e > temp->next->e) {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }
    }

    stack = tempStack;
}

int main() {
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;

    p* stack = nullptr;
    srand(time(NULL));

    for (int i = 0; i < length; i++) {
        int value = rand() % 100-40;
        stack = new p{ value, stack };
    }

    cout << "Вихідний масив: ";
    print(stack);
    cout << endl;

    sort(stack);

    cout << "Відсортований масив: ";
    print(stack);
    cout << endl;

    p* current = stack;
    while (current) {
        p* temp = current;
        current = current->next;
        delete temp;
    }

    return 0;
}
