#include<stdio.h>

int main() {

   int dish ,total_payment,chowmin=50,burger=80,pani_puri=40,paneer_tikka=120,paneer_lababdar=210,chicken_curry=280,a;
   float quantity;
   printf("Hii! This is Sham.");
   printf("\nWelcome to Sham Delicious World.");
   printf("\nHow may I help you ?");
   printf("\n1.dying to eat something delicious");
   printf("\n2.I want to have some meal with price list\t  :");
   scanf("%d", &a);
   if(a==1){
    printf("NO WORRY!Here is something special for you My dear.");
   }
   else if(a==2){
    printf("GREAT!");
   }
   else{
    printf("invalid selection");
   }

    printf("\nEnter the number to choose your dish" );
    printf("\n 1: burger :\t 80/-" );
    printf("\n 2: chowmin :\t 50/-" );
    printf("\n 3: pani puri :\t 40/5pcs" );
    printf("\n 4: paneer tikka :\t 120/full" );
    printf("\n 5: paneer lababdaar:\t 210/full" );
    printf("\n 6: chicken curry :\t 280/full");
    printf("\n your selection : \t");
    
    scanf("%d", &dish);

    switch(dish){
        case 1: printf("\n you selected burger");
        printf("\n select quantity  : ");
        scanf("%f", &quantity);
        printf("payable amount is %f", quantity*burger);
         break;
        case 2: printf("\n you selected chowmin");
        printf("\n select quantity");
        scanf("%f", &quantity);
        printf("payable amount is %f", quantity*chowmin);
         break;
        case 3: printf("\n you selected panipuri");
        printf("\n select quantity");
        scanf("%f", &quantity);
        printf("payable amount is %f", quantity*pani_puri);
         break;
        case 4: printf("\n you selected paneer tikka");
        printf("\n select quantity");
        scanf("%f", &quantity);
        printf("payable amount is %f", quantity*paneer_tikka);
         break;
        case 5: printf("\n you selected paneer lababdaar");
        printf("\n select quantity");
        scanf("%f", &quantity);
        printf("payable amount is %f", quantity*paneer_lababdar);
         break;
        case 6: printf("\n you selected chicken curry ");
        printf("\n select quantity");
        scanf("%f", &quantity);
        printf("payable amount is %f", quantity*chicken_curry);
                
         break;

        default: printf("invalid selection");

        printf("\n GREAT YOU HAVE SELECTED DELICIOUS DISH");
        printf("\n Have a nice day dear ");
  
    }
    


    return 0;
}