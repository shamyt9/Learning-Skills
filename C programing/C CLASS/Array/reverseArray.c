#include<stdio.h>
void arrayReverse(int ar[],int size);
int main()
{
  int arr[5]={2,54,1,345,567};
  arrayReverse(arr,5);
} 

void arrayReverse(int ar[],int size)
{
      int temp[size];
      int n=size-1;
      for(int i=0;i<size;i++)
      {
          temp[i]=ar[n];
          n--;
      }

      // printing the values
      printf("Original Array:  ");
        for(int i=0;i<size;i++)
      {
         printf("%d,  ",ar[i]);
      }

       printf("\nReversed Array:  ");
        for(int i=0;i<size;i++)
      {
         printf("%d,  ",temp[i]);
      }
}