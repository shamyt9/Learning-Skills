#include<stdio.h>

int main()
{
    int a=10,b=20;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("before swapping p1= %d",*p1);
    printf("\n before swapping p2=%d",*p2);
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("\n after swapping *p1=%d",*p1);
    printf("\n after swapping *p2= %d",*p2);
}