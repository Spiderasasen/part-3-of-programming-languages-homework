#include <stdio.h>
#include <stdlib.h>

void pointerPractice();

int main() {
    pointerPractice();
    return 0;
}

//question 1
void pointerPractice() {
    int x = 31;
    int* y = &x;

    //printing both the address of both x and y
    printf("Address of x: %p\n", &x);
    printf("Value of x: %d\n", x);
    printf("Now y is assigned with the address of x.\n");
    printf("Address of y: %p\n", y);
    printf("Value of y: %d\n", *y);

    //changing the value of x
    x = 19;
    printf("Value of x is now %d\n", x);
    printf("Address of x: %p\n", y);
    printf("Value of x: %d\n", *y);

    //changing the value of y
    *y = 7;
    printf("Value of y is now %d\n", *y);
    printf("Address of x: %p\n", &x);
    printf("Value of x: %d\n", x);
}