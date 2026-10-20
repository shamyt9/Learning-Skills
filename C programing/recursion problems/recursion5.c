#include<stdio.h>

void goodnight(int w);

int main();

int main(){

int a;
printf("Enter the number of times you want to print : ");
scanf("%d",&a);
goodnight(a);

}

void goodnight(int w){
    if(w==0)
    return;

    printf("\n GOOD NIGHT DEAR \n");

    goodnight(w-1);

    return;

}

