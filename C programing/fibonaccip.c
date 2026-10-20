#include<stdio.h>

int main()
{

    int n,num1=0,num2=1,i,fib;
    printf("enter the number : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
            if(i==1){
                fib=num1;
            }
            else if (i==2){
                fib=num2;
            }
            else{
                fib=num1+num2;
                num1=num2;
                num2=fib;

            }


    }
    printf("\n %d fibonacci  is %d",n,fib);
    return 0;




}
