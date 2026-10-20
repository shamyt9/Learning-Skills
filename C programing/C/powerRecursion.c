#include<stdio.h>
int main()
{
    int n=5,p=3;
    int val=power(n,p);
    printf("%d",val);
}
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }

    return power(n,p-1)*n;

}
