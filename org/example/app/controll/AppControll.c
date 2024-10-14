#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../servise/Func.h"

int run() {
    srand(time(NULL));
    int min = 1, max = 100;
    int len = randNum(min, 10) + 1;
    int *arr = createArr(len, min, max);
    if (arr == NULL) {
        return -1;
    }
    printArr(arr, len);
    int *sort_up = sortArrUp(arr, len);
    if (sort_up == NULL) {
        return -1;
    }
    int *sort_down = sortArrDown(arr, len);
    if (sort_down == NULL) {
        return -1;
    }
    int len_d_arr = len + len; // довжина масиву з об'єднаних масивів
    int *doubled_arr = doubleArr(sort_up, sort_down, len_d_arr);
    if (doubled_arr == NULL) {
        return -1;
    }
    // printArr(doubled_arr, len_d_arr);

    // printf("%d\n", searchMin(arr, len));
    // printf("%d\n", searchMax(arr, len));
    int new_len = 3; //масив з значеннями max в центрі i min з боків
    int *new_arr = createMinMaxArr(arr, len, new_len);
    if (new_arr == NULL) {
        return -1;
    }
    printArr(new_arr, new_len);

    free(arr);
    free(sort_up);
    free(sort_down);
    free(doubled_arr);
    free(new_arr);
    return 0;
}
