#include<stdio.h>
 int j,i,k,row,col;
int main()
{
   

    printf("Enter the number of rows : ");
    scanf("%d",&row);
     printf("Enter the number of column : ");
    scanf("%d",&col);
    int arr[row][col];
     for(i=0 ; i<row ; i++)
     {
        for(j=0 ; j<col ; j++)
        {
            printf("Enter the index value %d %d   ",i,j);
            scanf("%d",&arr[i][j]);
        }
     }

     for( i=0 ; i<row ; i++)
     {
        for(int j=0 ; j<col ; j++)
        {
            printf("%d\t",arr[i][j]);

        }
        printf("\n");
     }
     return 0;
}
