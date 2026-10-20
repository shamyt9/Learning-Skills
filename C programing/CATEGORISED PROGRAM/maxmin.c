#include<stdio.h>
int main()
{
    int num[5],max,min;
    for(int i=0;i<4;i++)
    {
        printf("please enter the number");
        scanf("%d",&num[i]);
    }
    max=num[0];
    min=num[0];
    for(int m=0;m<4;m++)
    {
        if(max<num[m])
        {
            max=num[m];
        }
        else if (min>num[m])
        {
            min=num[m];
        }
    }
    printf("max%d",max);
    printf("min%d",min);


}
