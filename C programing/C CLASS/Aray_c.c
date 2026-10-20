#include<stdio.h>
int main()
{
  int size;
  printf("Enter the number of elements you want to insert: ");
  scanf("%d",&size);


  int arr[size];
  int sum=0;

  for(int i=0;i<size;i++)
  {
    printf("Enter the number: ");
    scanf("%d",&arr[i]);
  }


  for(int i=0;i<size;i++)
  {
    sum=sum+arr[i];
  }

  printf("%d",sum);

}
