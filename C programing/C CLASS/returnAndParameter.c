#include<stdio.h>

int average(int km);
int main()
{
    int getVal=average(6);
    printf("%d",getVal);
}
int average(int km)
{
    int metre=km*1000;
    return metre;
}
