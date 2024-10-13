#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../servise/Func.h"

int run() {
    //(int argc, char **argv)
    int min = 1;
    int max = 100;
    srand(time(NULL));
    int len = randNum(2,10);
    int *arr = createArr(len, min, max);
    printArr(arr, len);
    int *sorted_arr_az = sortArrAZ(arr, len);
    // printArr(sorted_arr_az, len);
    int *sorted_arr_za = sortArrZA(arr, len);
    // printArr(sorted_arr_za, len);
    int *doubled_arr = doubleArr(sorted_arr_az, sorted_arr_za, len * 2);
    printArr(doubled_arr, len * 2);
    return 0;
}
