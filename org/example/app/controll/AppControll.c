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
    printArr(arr, len);

    int *sorted_arr_az = sortArrAZ(arr, len);
    int *sorted_arr_za = sortArrZA(arr, len);

    int len_d_arr = len * 2;
    int *doubled_arr = doubleArr(sorted_arr_az, sorted_arr_za, len_d_arr);
    printArr(doubled_arr, len_d_arr);

    free(arr);
    free(sorted_arr_az);
    free(sorted_arr_za);
    free(doubled_arr);
    return 0;
}
