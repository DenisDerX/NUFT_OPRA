#include "pch.h"
#include "framework.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>

void mat(int arr[], int size, int& count, int& sum) {
    count = 0;
    sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
            sum += i;
        }
    }
}