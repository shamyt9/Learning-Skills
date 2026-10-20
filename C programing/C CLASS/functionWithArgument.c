#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int main()
{
   add(23,34);
 sub(100,90);
}

int add(int a,int b)
{
    printf("Addition is: %d\n",a+b);
}

int sub(int a,int b)
{
    printf("Subtraction is: %d",a-b);
}
