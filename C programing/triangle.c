#include<stdio.h>

int main(){
    int row , i;

    printf("enter the number of row : ");
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("**");
        }
    }
}
