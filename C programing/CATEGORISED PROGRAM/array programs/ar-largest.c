#include<stdio.h>
int main()
{
    int i,temp;
    printf("Enter the size of numbers you want add : ");
    scanf("%d",&i);

    int num[i];
    for(int k=0;k<i;k++)
    {
       if(k<i){
         printf("enter the %d index of number-: ",k);
        scanf("%d",&num[i]);
    }
    else{
       printf(" %d \n ",num[k]);


    }
       }





}
