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

// int *sortArrDown(int *arr, int len) {
//     int *sorted_arr = malloc(sizeof(int) * len);
//     if (sorted_arr == NULL) {
//         return NULL;
//     }
//     int temp;
//     for (int i = 0; i < len; i++) {
//         sorted_arr[i] = arr[i];
//     }
//     for (int i = 0; i < len; i++) {
//         for (int j = 0; j < len - 1; j++) {
//             if (sorted_arr[j] < sorted_arr[j + 1]) {
//                 temp = sorted_arr[j];
//                 sorted_arr[j] = sorted_arr[j + 1];
//                 sorted_arr[j + 1] = temp;
//             }
//         }
//     }
//     return sorted_arr;
// }

// int *doubleArr(int sort_up[], int sort_down[], int len) {
//     int *arr = malloc(sizeof(int) * len);
//     if (arr == NULL) {
//         return NULL;
//     }
//     int index = 0;
//     int counter = 0;
//     for (int i = 0; i < len; i++) {
//         if (index < len / 2) {
//             arr[i] = sort_up[index];
//             index++;
//         } else {
//             arr[i] = sort_down[counter];
//             counter++;
//         }
//     }
//     return arr;
// }

// int *createMinMaxArr(int arr[], int len, int new_len) {
//     int *arr_min_max_arr = malloc(sizeof(int) * new_len);
//     if (arr_min_max_arr == NULL) {
//         return NULL;
//     }
//     for (int i = 0; i < new_len; i++) {
//         if (new_len % 2 == 0) {
//             if (i == new_len / 2 - 1 | i == new_len / 2) {
//                 arr_min_max_arr[i] = searchMax(arr, len);
//             } else {
//                 arr_min_max_arr[i] = searchMin(arr, len);
//             }
//         } else {
//             if (i == new_len / 2) {
//                 arr_min_max_arr[i] = searchMax(arr, len);
//             } else {
//                 arr_min_max_arr[i] = searchMin(arr, len);
//             }
//         }
//     }
//     return arr_min_max_arr;
// }
