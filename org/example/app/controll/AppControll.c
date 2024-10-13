#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../servise/Func.h"

int run() {
    srand(time(NULL));
    int min = 1, max = 100;
    int len = randNum(min, max);
    int *arr = createArr(len, min, max);
    printArr(arr, len);
    int *sorted_arr_az = sortArrAZ(arr, len);
    int *sorted_arr_za = sortArrZA(arr, len);
    int len_d_arr = len * 2;
    int *doubled_arr = doubleArr(sorted_arr_az, sorted_arr_za, len_d_arr);
    printArr(doubled_arr, len_d_arr);
    return 0;
}
