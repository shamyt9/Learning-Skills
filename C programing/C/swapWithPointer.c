#include<stdio.h>
int main()
{
    int num1=9,num2=8;
    int *ptr=&num1;
     int *ptr2=&num2;
    *ptr=*ptr+*ptr2; //17
    *ptr2=*ptr-*ptr2;// *ptr2=9
    *ptr=*ptr-*ptr2;//8
    printf("%d   %d",num1,num2);
}
