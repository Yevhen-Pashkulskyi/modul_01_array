#ifndef FUNCS_H_INCLUDED
#define FUNCS_H_INCLUDED

int run();

int randNum(int min, int max);

int *createArr(int size, int min, int max);

void printArr(int arr[], int len);

int *sortArrUp(int arr[], int len);

int *sortArrDown(int arr[], int len);

int *doubleArr(int sort_up[], int sort_down[], int len);

int searchMin(int arr[], int len);

int searchMax(int *arr, int len);

int *createMinMaxArr(int arr[], int len, int new_len);
#endif
