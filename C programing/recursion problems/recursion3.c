#include<stdio.h>

void congratulations(int w);
int main();

int main(){

    int q;
    printf("\n\t\tenter the number to print the statement  : ");
    scanf("%d",q);

    congratulations(q);

    return 0;
}

void congratulations(int w){
    if(w==0)
    return;
    printf( "\n \tcongratulation bro ");
    printf("\n how are you feeling now");
    printf("\n\t is every thing is fine");

    congratulations(w-1);
   
}