#include <stdlib.h>
#include "Func.h"

int randNum(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int *createArr(int len, int min, int max) {
    int *arr = malloc(sizeof(int) * len);
    if (arr == NULL) {
        return NULL;
    }
    for (int i = 0; i < len; i++) {
        arr[i] = randNum(min, max);
    }
    return arr;
}

int *sortArrUp(int arr[], int len) {
    int *sorted_arr = malloc(sizeof(int) * len);
    if (sorted_arr == NULL) {
        return NULL;
    }
    int temp;
    for (int i = 0; i < len; i++) {
        sorted_arr[i] = arr[i];
    }
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (sorted_arr[j] > sorted_arr[j + 1]) {
                temp = sorted_arr[j];
                sorted_arr[j] = sorted_arr[j + 1];
                sorted_arr[j + 1] = temp;
            }
        }
    }
    return sorted_arr;
}

int *maxMidArrUp(int arr[], int len) {
    int *sorted_arr = malloc(sizeof(int) * len);
    int left = 0;
    int right = len - 1;

    if (sorted_arr == NULL) {
        return NULL;
    }
    for (int i = 0; i < len; i++) {
        if (i % 2 == 0) {
            sorted_arr[left] = arr[i];
            left++;
        } else {
            sorted_arr[right] = arr[i];
            right--;
        }
    }
    return sorted_arr;
}
