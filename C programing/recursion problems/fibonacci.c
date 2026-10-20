#include<stdio.h>


int fib(int x);

int main();

int main(){
   
    printf("answer is",fib(10));
    

return;

}


int fib(int x){

  {
    if(x==0)
return 0;

if(x==1)
return 1;
  }

int fib1=fib(x-1);
int fib2=fib(x-2);
int fibonacci= fib1 +fib2 ;
 return fibonacci;
}




