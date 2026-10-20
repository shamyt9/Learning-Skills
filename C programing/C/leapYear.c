#include<stdio.h>

int main()
{
    int year=3000;

    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                printf("LEAP YEAR");
            }
            else{
                printf("Not a leap year");
            }

        }
        else{
            printf("leap year");
        }

    }
    else{
        printf("Not a leap year");
    }
}
