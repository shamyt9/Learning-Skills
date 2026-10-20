
//pointer with different data types
#include <stdio.h>
int main() {
    // pointer with int
    int a = 10;
    int *pInt = &a;
    printf("Integer value: %d\n", *pInt);

    // pointer with float
    float b = 5.5;
    float *pFloat = &b;
    printf("Float value: %.2f\n", *pFloat);

    // pointer with char
    char c = 'A';
    char *pChar = &c;
    printf("Character value: %c\n", *pChar);

    // pointer with double
    double d = 3.14;
    double *pDouble = &d;
    printf("Double value: %.2f\n", *pDouble);

    return 0;
}