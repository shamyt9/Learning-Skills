#include<stdio.h>
int main ()
{
    int rows , col;
    printf("enter the number of rows");
    scanf("%d",&rows);
    printf("\n Enter the numbetr of columns : ");
    scanf("%d",&col);
    int matrix[rows][col];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            matrix[i][j]=i*col+j+1;

        }
    }
    printf(" ");
    for(int j=0;j<col;j++)
    {
        printf("\n %2d",j+1);

    }
    printf(" \n ");
    for(int i=0;i<rows;i++)
    {
        for(int j)
    }
}