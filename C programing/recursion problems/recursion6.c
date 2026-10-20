#include<stdio.h>

void name(int q);

int main();

int main(){

    int r;

    printf("Enter the numberv of times you want to print  : ");
    scanf("%d",&r);
    name(r);


}
void name(int q){
    if(q==0)
    return;

    printf("My name is shamshad ali \n");

    name(q-1);

    return;
}