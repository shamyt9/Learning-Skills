#include<stdio.h>

int main()
{
    int arr[5]={12,32,123,34,453};
    int *ptr=&arr;
    int t;
    for(int i=1;i<5;i++)
    {
        if(*ptr>arr[i])
        {
            t=*ptr;
            *ptr=arr[i];
            arr[i]=t;
        }
        ptr++;
    }
    for(int i=0;i<5;i++)
    {
        printf("%d  ",arr[i]);
    }
}
