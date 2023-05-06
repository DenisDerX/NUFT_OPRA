#include "pch.h"
#include "framework.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>

using namespace std;

void creatv(int* v, int nv) {
    int i;
    for (i = 0; i < nv; i++)
        *(v + i) = rand() % 201 - 100;
}

void outv(int* v, int nv) {
    int i;
    for (i = 0; i < nv; i++)
        printf("%5d ", *(v + i));
    cout << "\n";
}
