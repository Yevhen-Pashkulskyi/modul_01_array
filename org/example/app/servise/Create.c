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

int *createMinMaxArr(int arr[], int len, int new_len) {
    int *arr_min_max_arr = malloc(sizeof(int) * new_len);
    if (arr_min_max_arr == NULL) {
        return NULL;
    }
    for (int i = 0; i < new_len; i++) {
        if (new_len % 2 == 0) {
            if (i == new_len / 2 - 1 | i == new_len / 2) {
                arr_min_max_arr[i] = searchMax(arr, len);
            } else {
                arr_min_max_arr[i] = searchMin(arr, len);
            }
        } else {
            if (i == new_len / 2) {
                arr_min_max_arr[i] = searchMax(arr, len);
            } else {
                arr_min_max_arr[i] = searchMin(arr, len);
            }
        }
    }
    return arr_min_max_arr;
}
