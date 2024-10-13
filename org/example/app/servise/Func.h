#ifndef FUNCS_H_INCLUDED
#define FUNCS_H_INCLUDED

int run();

int randNum(int min, int max);

int *createArr(int size, int min, int max);

void printArr(int arr[], int len);

int *sortArrAZ(int arr[], int len);

int *sortArrZA(int arr[], int len);

int *doubleArr(int arr_az[], int arr_za[], int len);

#endif
