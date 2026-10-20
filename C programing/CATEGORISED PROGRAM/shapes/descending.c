om#include<stdio.h>
int main()
{
    int a,i,temp;
    printf("Enter the total elements you want to arrange in descending order : ");
    scanf("%d",&a);
    int des[a];
    for(i=0;i<a;i++)
    {
        printf("\n enter the %d element : ",i);
        scanf("%d",&des[i]);

    }
    printf("\n Your given numbers are : ");
    for(i=0;i<a;i++)
    {
        printf(" %d ",des[i]);


    }
    for(i=0;i<a;i++)
    {
      for(int j=i+1;j<a;j++)
      {
        if(des[i]<des[j]){
            temp=des[i];
            des[i]=des[j];
            des[j]=temp;
        }
      }
    }
    printf("\n Your arranged descending order is : ");
    for(i=0;i<a;i++)
    {
        printf("%d ",des[i]);

    }
    return 0;

}
