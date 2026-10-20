//print armstrong number

#include<stdio.h>
int main()
{
int rem,sum,temp;

for(int i=1; i<=1000;i++)
{
    temp=i;
    sum=0;

    while (temp>0)
    {
     rem=temp%10;
     sum=sum+rem*rem*rem;
     temp=temp/10;
    }
     if(i==sum){
        printf("\n it is armstrong number %d ", sum);
     }







}



}

