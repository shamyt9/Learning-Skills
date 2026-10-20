#include<stdio.h>

int fib(int n);

int main(){

    int n;
    printf("\n Enter the number : ");
    scanf("%d,&n");
    fib(n);
    printf("\n you answer is ",n);

}
 int fib(int n)
{
    if(n==0){
    return 0;
    }
    if(n==1){
    return 1;
    }
    int x;
    while(x<=n)
    {

    int temp=fib(n-1)+fib(n+2);
    x++;
      return temp;
    }
}


