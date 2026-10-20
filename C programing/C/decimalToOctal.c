#include<stdio.h>

int main()
{
    int decimal=10,rem,octal=0,place=1;

    while(decimal != 0)
    {
        rem=decimal%8;
        octal+=rem*place;
        decimal /=8;
        place *=10;
    }
    printf("%d",octal);
}
