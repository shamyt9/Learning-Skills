#include<stdio.h>
int main();

int main(){
    int a;
    int *ctr,**cctr;
     ctr = &a;
     cctr = &ctr;
     **cctr=9;

  //printf("a= %d", a);
    //printf("\n ptr is %d", *ptr);

    *ctr+=6;
     printf("a= %d", a);
    printf("\n ptr is %d", *ctr);

     (*ctr)++;
     printf("\n a= %d", a);
    printf("\n ptr is %d", *ctr);


    



}