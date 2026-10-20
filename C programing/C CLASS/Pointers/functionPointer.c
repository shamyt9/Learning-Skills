#include<stdio.h>
void sum(int a,int b)
{
  printf("%d",a+b);
}

int main()
{
   int a=900,b=765;
   int (*fun)(int,int);
   fun=sum;
   fun(a,b);
}