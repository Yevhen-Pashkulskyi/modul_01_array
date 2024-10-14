#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../servise/Func.h"

int run() {
    srand(time(NULL));
    int min = 1, max_len = 10;
    int max_range = 100;
    int len = randNum(min, max_len);

    int *arr = createArr(len, min, max_range);
    if (arr == NULL) {
        return -1;
    }
    printArr(arr, len);
    int *sort_up = sortArrUp(arr, len);
    if (sort_up == NULL) {
        return -1;
    }
    int *max_mid_arr = maxMidArrUp(sort_up, len);
    if (max_mid_arr == NULL) {
        return -1;
    }
    printArr(max_mid_arr, len);

    free(arr);
    free(sort_up);
    free(max_mid_arr);

    return 0;
}
