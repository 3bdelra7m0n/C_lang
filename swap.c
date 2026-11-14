#include<stdio.h>
#include<cs50.h>

void swap(int *a, int *b);

int main(void) {

    int first = 50, second = 100;

    printf("Before swap : first = %d - second =  %d \n", first, second);

    swap(&first, &second);

    printf("After swap : first = %d - second =  %d \n", first, second);

    return 0;
}

void swap(int *fr, int *sc) {

    int th = *fr;
    *fr = *sc;
    *sc = th;
}