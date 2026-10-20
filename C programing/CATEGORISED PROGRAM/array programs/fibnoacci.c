#include<stdio.h>
int main ()
{
    //first n fibonacci series number 0,1,1,2,3,5,8,13
    int fib,n,i,x1=0,x2=1;

    printf("enter the number upto which you want to print fibonacci series : ");
    scanf("%d",&n);
    int fibn[n];
     printf("\n answer : ");
    printf("%d\t%d",x1,x2);

 for(i=2;i<n;i++)
 {
   fib=x1+x2;
   x1=x2;
   x2=fib;
   fibn[i]=x2;

 }


 for(i=2;i<n;i++)
 {
 printf("\t%d",fibn[i]);
 }


}
