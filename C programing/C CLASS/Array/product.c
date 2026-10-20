#include<stdio.h>
int main()
{
  int size;
  printf("Enter the size: ");
  scanf("%d",&size);

  int arr[size];

  for(int i=0;i<size;i++)
  {
         printf("Enter the elements: ");
         scanf("%d",&arr[i]);
  }
int product=1;
  for(int i=0;i<size;i++)
  {
     product=product*arr[i];
  }
  printf("\n\n%d",product);
}