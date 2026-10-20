#include<stdio.h>

int main()
{
    int i,j,s;
    printf("enter the size  : ");
    scanf("%d",&s);

    for(i=1;i<=s;i++)
    {
        for(j=i;j<=s;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
