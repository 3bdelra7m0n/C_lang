#include<stdio.h>
#include<cs50.h>

void plus(int, int);
void minus(int, int);
void x(int, int);
void division(int, int);

// Main Function

int main(void) {

    int a = 10;
    int b = 20;

    plus(a, b);
    minus(50, 20);
    x(5, 10);
    division(100, 5);

    return 0;
}

// Functions

void plus(int first, int second) {
    
    int result = first + second;

    printf("%d + %d = %d \n", first, second, result);

}

void minus(int first, int second) {

    int result = first - second;

    printf("%d - %d = %d \n", first, second, result);
}

void x(int first, int second) {

    int result = first * second;

    printf("%d * %d = %d \n", first, second, result);
}

void division(int first, int second) {

    int result = first / second;

    printf("%d / %d = %d \n", first, second, result);
}