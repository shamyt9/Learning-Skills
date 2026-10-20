#include<stdio.h>

int fibonacci(int w);

int main();

int main(){

   
   
    fibonacci(3);

}

int fibonacci(int w){
if(w==0)
return 0;
if(w==1)
return 1;
int fib1=fibonacci(w-1);
int fib2=fibonacci(w-2);
int fib=fib1+fib2;



return fib;

}