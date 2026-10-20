#include<stdio.h>

int main()
{

int qty,sum=0,cost;
int opt;
char ch;
do{
        printf("\t\t\t Select the dish you wanna to buy ");
        printf("\n Dishes\t\t\tprice");
        printf("\n1. Burger\t\t\t80/-");
        printf("\n2. cofee\t\t\t50/-");
        printf("\n3. tea\t\t\t 30/-");
        printf("\n4. paneer_tikka\t\t 110/-");
        printf("\n5. samosa\t\t\t 15/-");
        printf("\n6. dhosa\t\t\t120/-");
        printf("\n you selection  : ");

        scanf("%d",&opt);
        switch(opt){
                case 1:printf("\nYou have selected Burger");
                       printf("\n Enter the quantity :");
                       scanf("%d",&qty);
                       cost=qty*80;
                       break;


                case 2:printf("\nYou have selected cofee");
                       printf("\n Enter the quantity :");
                       scanf("%d",&qty);
                       cost=qty*50;
                       break;
                case 3:printf("\nYou have selected tea");
                       printf("\n Enter the quantity :");
                       scanf("%d",&qty);
                       cost=qty*30;
                       break;
                case 4:printf("\nYou have selected paneer_tikka");
                       printf("\n Enter the quantity :");
                       scanf("%d",&qty);
                       cost=qty*110;
                       break;
                case 5:printf("\nYou have selected samosa");
                       printf("\n Enter the quantity :");
                       scanf("%d",&qty);
                       cost=qty*15;
                       break;
                case 6:printf("\nYou have selected dhosa");
                       printf("\n Enter the quantity :");
                       scanf("%d",&qty);
                       cost=qty*120;
                       break;

             default :
                     {
                        printf("\n INVALID");
                     }
        }
          printf("\N Do you want to buy more dishes , press 'Y' for yes : ");
        scanf("%c",&ch);
        sum=sum+cost;



}

        while(ch=='y');


        printf("\n YOUR TOTAL PRICE IS %d",sum);



}
