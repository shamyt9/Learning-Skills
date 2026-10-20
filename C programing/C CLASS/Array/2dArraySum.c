#include<stdio.h>
int main()
{
   int arr[4][4];
   printf("Enter the 16 values: ");
   for(int i=0;i<4;i++)
   {
    for(int j=0;j<4;j++)
    {
       scanf("%d",&arr[i][j]);
    }
   }
   

  printf("\nArray : \n");
  for(int i=0;i<4;i++)
   {
    for(int k=0;k<4;k++)
    {
       printf("%d ",arr[i][k]);
    }
    printf("\n");
   }

   printf("\n\nRows SUM:  \n");

   for(int i=0;i<4;i++)  //row
   {
    int sum=0;
    for(int k=0;k<4;k++) //column
    {
       sum=sum+arr[i][k];
    }
    printf("Row_%d Sum:%d",i,sum);
    printf("\n");
   }


   printf("\nCOLUMN SUM:  \n");

   for(int i=0;i<4;i++)  //row
   {
    int sum=0;
    for(int k=0;k<4;k++) //column
    {
       sum=sum+arr[k][i];
    }
    printf("Column_%d Sum:%d",i,sum);
    printf("\n");
   }


   printf("\nDiagonal SUM:  \n");
  int diagonalSum=0;
   for(int i=0;i<4;i++)  //row
   {
      diagonalSum+=arr[i][i];
   
   }
    printf("Diagonal Sum:%d",diagonalSum);
    printf("\n");
}



