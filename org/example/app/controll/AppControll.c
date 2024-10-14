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

    int new_len_arr = 3; //масив з значеннями max в центрі i min з боків
    int *max_mid_arr = createMinMaxArr(arr, len, new_len_arr);
    if (max_mid_arr == NULL) {
        return -1;
    }
    printArr(max_mid_arr, new_len_arr);

    free(arr);
    free(max_mid_arr);
    return 0;
}
