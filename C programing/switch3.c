#include<stdio.h>



int main() {

   int dish ,chowmin=50,burger=80,pani_puri=40,paneer_tikka=120,paneer_lababdar=210,chicken_curry=280,a;
   float quantity,total_payment;
   printf("Hii! This is Sham.");
   printf("\nWelcome to Sham Delicious World.");
   printf("\nHow may I help you ?");
   printf("\n 1. I want to have something delicious");

   printf("\n2.I want to take a look here to organise any event .\t  :");
   scanf("%d", &a);
  switch(a){
    case 1:
     printf("\nEnter the number to choose your dish" );
    printf("\n 1: burger :\t\t 80/-" );
    printf("\n 2: chowmin :\t\t 50/-" );
    printf("\n 3: pani puri :\t\t 40/5pcs" );
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
   break;


  case 2 : printf("\n Ok no problem sir ; Just take a complete look to our wonderful hotel with great service , design and look.");
  printf("\n Also share your feedback ");
  printf("\n       \n");

  break;

  default : printf("\n invalid selection");

    }

    printf("\n have a great day sir");



    return 0;
}
