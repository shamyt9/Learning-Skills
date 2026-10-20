#include<stdio.h>

int main() {
    int a;
printf("enter the number  :");
scanf("%d", &a);
int sum=0;

for( int k=1; k<=a; k=k+1)
{
sum=k+sum;
}
printf("%d", sum);

}