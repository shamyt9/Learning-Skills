#include<stdio.h>

int main(){
    int n=0                                                                                                                                                                                                                                                                                            ,a;
    printf("enter the number : ");
    scanf("%d", &a);

   while(a!=0){
    a=a/10;
    n=n+1;
   }
   printf("\n total digits in the given number is : %d", n);
}