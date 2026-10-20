#include<stdio.h>
int main()
{
  char array[4][4];

  printf("Enter the values of array: ");
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      scanf(" %c",&array[i][j]);
    
    }
  }

  printf("\nTraversing the Values of Array: \n");
   for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      printf("%c  ",array[i][j]);
    }
    printf("\n");
  }
}
