#include <stdio.h>
#include <stdlib.h>

void pointerPractice();
void seperator(int question_number); //mainly used for me to see if where everything is
void reverse2(char* string, char* string2);
int length_word(char* string);
int firstVowel (char* string);
char* concat(char* string, char* string2);

int main() {
    //question 1, Practice with pointers
    seperator(1);
    pointerPractice();

    //question 2, Reverse a string with no set length
    seperator(2);
    char* forward = "Hello World";
    char* reverse = malloc(sizeof(char)*4);
    reverse2(forward, reverse);
    printf("%s\n", reverse);

    //question 3, getting the index of where the first vowel is located, not including y
    seperator(3);
    char* trail1 = "abcdef";
    char* trail2 = "bdefg";
    char* trail3 = "lkjp";
    printf("%d\n",firstVowel(trail1)); // prints 0
    printf("%d\n",firstVowel(trail2)); // prints 2
    printf("%d\n",firstVowel(trail3)); // prints -1

    //question 4
    seperator(4);
    char* first = "abc";
    char* second = "defg";
    char* new_string = concat(first, second);
    printf("%s\n",new_string);

    //question 5
    seperator(5);
    char* string = "apple";
    char* string2 = "dapple";

    return 0;
}

//sepreating the questions
void seperator(int question_number) {
    //checking if the question number is 6
    if (question_number == 5) {
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
    int size = length_word(string);

    for (int i = 0; i < size; i++) {
        string2[i] = string[size - 1 - i];
    }
}

//getting the length of the word
int length_word(char* string) {
    int length = 0;
    while (*string) {
        string++;
        length++;
    }
    return length;
}

//question 3
int firstVowel (char* string) {
    int index = 0;

    //counting until the index is found
    while (*string) {
        //checking if there is a vowel
        if (*string == 'a' || *string == 'e' || *string == 'i' || *string == 'o' || *string == 'u') {
            return index;
        }

        string++;
        index++;
    }
    return -1;
}

//question 4
char* concat(char* first, char* second) {
    int size1 = length_word(first);
    int size2 = length_word(second);
    int total_size = size1 + size2;

    //making enough memory for the final string
    char* new_string = malloc(total_size + 1);

    //copying the first string
    int i = 0;
    while (*first) {
        new_string[i] = *first;
        first++;
        i++;
    }

    //copying the second string
    while (*second) {
        new_string[i] = *second;
        second++;
        i++;
    }

    return new_string;
}