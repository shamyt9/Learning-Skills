#include<stdio.h>

int main(){

    int i , j,k,size ;
    printf("Enter the size of the square : ");
    scanf("%d",&size);
    //to draw the top row
    for(i=0;i<size;i++){
        printf("* ");
    }
    //to draw left column
    for(j=0;j<size;j++){
        printf("\n*");


    }
    //to draw right line
    for(k=0;k<size-2;k++){
        printf(" ");
        printf(" * ");
    }
    for(int l=0;l<size;l++){
        printf("\n*");
    }




}
