#include<stdio.h>
int main()
{
int row,column;
printf("Enter the number of rows: ");
scanf("%d",&row);


printf("Enter the number of column: ");
scanf("%d",&column);
  int num[row][column];

  num[0][0]=123;
  num[0][1]=13;
  num[1][0]=87;
  num[1][1]=876;

  printf("%d",num[0][1]);
}