#include<stdio.h>

//void swap(int a, int b);

//void swap(int a, int b){
    
    //int t;
    //t=a;
    //a=b;
   // b=t;

   // printf("\n value of a %d & value of b %d", a,b);

//}

int main();

int main(){
    //int x=2 , y=4;
    //swap(x,y);
    //printf(" \n value of x is %d & value of y is %d", x,y);

    
    int x=2 , y=4;

    tswap(&x, &y);
    printf(" \n value of x is %d & value of y is %d", x,y);



}

void tswap(int *z, int *s);
void tswap(int *z, int *s){
int e;
e=*z;
*z=*s;
*s=e;
 


}




