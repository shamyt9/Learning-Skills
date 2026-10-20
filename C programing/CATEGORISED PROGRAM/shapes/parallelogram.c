#include<stdio.h>

int main()
    {
       int i,j,k,sz;
       printf("enter the size of the parallelogram : ");
       scanf("%d",&sz);
       for(i=0;i<sz;i++)
       {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=0;k<sz;k++){
            printf("* ");
        }
        printf("\n");
            
       
        
        
       } 
    }
