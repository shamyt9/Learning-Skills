#include<stdio.h>
int main()
{
    int a,temp;
    printf("Enter the total numbers that has to be arrange in ascending order : ");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("\n enter the number : ");
       scanf("%d",&arr[i]);
       
    }
    printf("\n Your given numbers are    :    ");
    for(int i=0;i<a;i++)
    {
       printf("%d ",arr[i]);
    }
   
   for(int i=0;i<a;i++)
   {
    for(int j=i+1;j<a;j++)
    {
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }
   printf("\n your ascending order number is  : ");
   for(int i=0;i<a;i++){
    printf("%d ",arr[i]);
   }
   return 0;

}