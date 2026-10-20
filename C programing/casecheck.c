#include<stdio.h>

int main() {

    char ch;
    printf("enter the character");
    scanf("%c", &ch);

    if(ch>='A' && ch<='Z') {
        printf("upper case letter");
    }
    else if(ch>='a' && ch<='z') {
        printf("lower case letter");
    }
    else{
        printf("not a english letter");
    }

    return 0;
}