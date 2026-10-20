#include<stdio.h>

int main() {
    int num;
    printf("enter the number");
    scanf("%d", &num);
    if(num>=1) {
        printf("it is positive number");
        if(num%2==0){
            printf("\n it is even number");
        }else{
            printf("\n but it is not even number");
        }
    }else if(num==0) {
        printf("it is constant number");

    }else {
        printf("it is negative number");
    }
    return 0;
    }