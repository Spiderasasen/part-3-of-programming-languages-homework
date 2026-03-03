#include <stdio.h>
#include <stdlib.h>

void pointerPractice();
void seperator(int question_number);

int main() {
    //question 1, Practice with pointers
    seperator(1);
    pointerPractice();

    //question 2, Reverse a string with no set length
    seperator(2);
    return 0;
}

//sepreating the questions
void seperator(int question_number) {
    //checking if the question number is 6
    if (question_number == 4) {
        printf("\n|************* Final Question *************|\n");
    }
    else {
        printf("\n|************* Question %d *************|\n", question_number);
    }
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

//question 2
void reverse2(char* string, char* string2) {

}