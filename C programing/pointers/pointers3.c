#include<stdio.h>
int main();

void robo(int a,int b,int *sum,int *avg,int *prod);
int  main(){
int a,b,sum,prod,avg,rem;
a=4;
b=10;

robo(a,b,&sum,&avg,&prod);

printf("sum is = %d\n average is = %d\n product is = %d\n", sum,avg,prod);

}

void robo(int a,int b,int *sum, int *avg,int *prod){
    *sum=a+b;
    *avg=(a+b)/2;
    *prod=a*b;


    return;
}
