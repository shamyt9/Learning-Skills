// call by reference example

#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int x=5;
    int y=10;
    printf("\n Before swap : x=%d , y=%d",x,y);
    swap(&x,&y);
    printf("\n after swap : x=%d , y=%d",x,y);

}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
