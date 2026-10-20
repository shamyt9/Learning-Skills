#include<stdio.h>
int main()
{
    int i,size;
    printf("Enter the number : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}