#include<stdio.h>
int main()
{
    int num[3][2];
    num[0][0]=23;
    num[0][1]=34;
    num[1][0]=4;
    num[1][1]=54;
    num[2][0]=94;
    num[2][1]=84;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",num[i][j]);
        }
        printf("\n");
    }

}