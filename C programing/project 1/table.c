#include<stdio.h>
int main (){
    int a;
    printf("\n enter the number  : ");
    scanf("%d", &a);

    for(int i=1; ; i=i+1)
    { printf("\n enter the number  : ");
    scanf("%d", &a);
    if(a%10==0){
       break;
    }

    }
     printf("\n it is divided by 10  :%d", a);  
     
    return 0;
}