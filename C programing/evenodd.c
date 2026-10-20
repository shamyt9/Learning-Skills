#include<stdio.h>

int main(){
//even->1
//odd->0
    int a;
    printf("enter the number");
    scanf("%d", &a);
    printf("\n %d", a%2==0);
    printf("\n it is even number");
}