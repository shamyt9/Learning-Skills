#include<stdio.h>
int main()
{
  int size;
  printf("Enter the size: ");
  scanf("%d",&size);

  int arr[size];
  int sum=0;
  int product=1;

  for(int i=0;i<size;i++)
  {
         printf("Enter the elements: ");
         scanf("%d",&arr[i]);
  }

  for(int i=0;i<size;i++)
  {
        if(arr[i]%2==0)
        {
           product=product*arr[i];
        }
        else{
           sum=sum+arr[i];

        }
  }

}