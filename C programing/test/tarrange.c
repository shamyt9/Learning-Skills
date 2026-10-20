#include<stdio.h>
int main ()
{
    //HEADING 1 :Ascending order

    int a,i,n;
    printf("enter the number of element you want to arrange  : ");
    scanf("%d",&n);
    int ele[n];

     for(i=0;i<n;i++)
     {
        printf("\n Enter the element %d : ",(i+1));
        scanf("%d",&ele[i]);
     }

      int temp;
     for(i=0;i<n;i++)
     {
        for(int j=i+1;j<n;j++)
        {
          if(ele[i]>ele[j]){
            temp=ele[j];
            ele[j]=ele[i];
            ele[j]=ele[i];
          }
        }
          printf("\n");
        for(i=0;i<n;i++)
        {
         printf("\t %d",ele[i]);
        }
        return 0;

     }



}
