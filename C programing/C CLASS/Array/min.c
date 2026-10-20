#include<stdio.h>
int main()
{
  int arr[5]={2,54,1,345,567};
  int min=arr[0]; //2
  int max=arr[0]; //2

  for(int i=0;i<5;i++)
  {
    if(min>arr[i]){
      min=arr[i];
    }

     if(max<arr[i]){
      max=arr[i];
    }
  }

  printf("Minimum value: %d\n",min);
  printf("Maximum value: %d\n",max);

}