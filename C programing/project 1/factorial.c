#include<stdio.h>
int main () {
    int a,fact=1;

    printf("enter the number :  ");
    scanf("%d",&a);
     for(int i=1; i<=a; i=i+1)
     {
        fact=fact*i;
     }

     printf("\n final factorial number is  : %d ", fact);

     return 0;
}