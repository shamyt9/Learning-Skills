#include<stdio.h>
int main()
{
    int a,b,c;
    printf("entre the first number : ");
    scanf("%d",&a);
    printf("\n enter the second nuimber : ");
    scanf("%d",&b);
    printf("\n enter the third number :");
    scanf("%d",&c);
    if(a<b){
     if(b>c)
     {
        printf("\n %d is the largest number ",b);

     }
     else if(c<b){
        printf("%d is the largest number ",c);
     }   
    }

    else if(b<a)
    {
        if(a>c){
            printf("\n %d is the largest number",a);
        }
        else if(a<c){
            printf("\n %d is the largest number :",c);
        }
    }
}