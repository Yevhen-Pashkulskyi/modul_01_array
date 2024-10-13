#include <stdlib.h>
#include "Func.h"

int *createArr(int len, int min, int max) {
    int *arr = malloc(sizeof(int) * len);
    for (int i = 0; i < len; i++) {
        arr[i] = randNum(min, max);
    }
    return arr;
}

int randNum(int min, int max) {
    return rand() % (max - min) + min;
}

int *sortArrAZ(int arr[], int len) {
    int *sorted_arr = malloc(sizeof(int) * len);
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

int *sortArrZA(int *arr, int len) {
    int *sorted_arr = malloc(sizeof(int) * len);
    int temp;
    for (int i = 0; i < len; i++) {
        sorted_arr[i] = arr[i];
    }
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (sorted_arr[j] < sorted_arr[j + 1]) {
                temp = sorted_arr[j];
                sorted_arr[j] = sorted_arr[j + 1];
                sorted_arr[j + 1] = temp;
            }
        }
    }
    return sorted_arr;
}

int *doubleArr(int arr_az[], int arr_za[], int len) {
    int *arr = malloc(sizeof(int) * len);
    int index = 0;
    int counter = 0;
    for (int i = 0; i < len; i++) {
        if (index < len / 2) {
            arr[i] = arr_az[index];
            index++;
        } else {
            arr[i] = arr_za[counter];
            counter++;
        }
    }
    return arr;
}
