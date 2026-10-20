#include<stdio.h>
// counting odd number

int main ()
{
    int arr[5],count=0;

    for(int i=0;i<5;i++){
printf("enter the number %d: ",(i+1));
scanf("%d",&arr[i]);
    }
    printf("\n your given numbers are :  ");
    for(int i=0;i<5;i++)
    {
        printf("\t %d",arr[i]);
    }
    printf("\n The odd number in your given number are : ");
    for(int i=0;i<5;i++)
    {
       if(arr[i]%2!=0){

        count=count+1;
       }

    }
    printf("\n total given odd numbers are : %d", count);


}
