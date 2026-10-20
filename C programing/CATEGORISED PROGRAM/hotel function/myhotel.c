#include<stdio.h>
void firstoption(int opt)

int main()
{
int opt;
printf("\t\t\t HOTEL BLACK HOLE ");
printf("\n\t\t---------------------------------");
printf("\n\t\t\t *Live your life*");
printf("\n\n Hi Dear !");
printf("\n\t This is Hotel Black Hole ..");
printf("\n\t A very warm and most Welcome to place of delicious hub.");
printf("\n\n\t\t\t What do you want to have ?");
printf("\n\t1:Breakfast");
printf("\n\t2:Lunch options");
printf("\n\t3:Dinner options");
printf("\n\t4:Black hole Special");
printf("\n\t5:Hotel Detail");
printf("\n\t6:Banquet hall booking");
printf("\n");
printf("\nChoose an option : ");
scanf("%d",&opt);


}
firstoption(opt){
    switch(opt){
        case 1:printf("\nYour Selection is No.1 Breakfast");
              printf("\n\t\t BREAKFAST OPTIONS ");
              Printf("\n\ta.Veg-Dishes");
              printf("\n\t1.Veg Sandwich -    50/-\n\t2.Hara Bhara Kebab -    120/-\n\t3.PaneerTikka -    80/-\n\t4.Chilly potatos -    80/-");
              printf("\n\t\tb.Non-veg Dishes");
              printf("\n\t5.Non-Veg Sandwich -    120/-\n\t6.Chicken Tikka -    220/-\n\t7.Seek Kebab -   180/-\n\t8.Roasted Chicken Leg -   120/-");
              int a,veg,b_pay;
              printf("\n\n Select Your option want to buy");
              scanf("%d",&a);
              switch(a)
              {
                case 1:printf("\n\n\tYour Selection is Veg Sandwich");
                       printf("choose your quantity : ");
                       scanf("%d",&veg);
                       b_pay=veg*50;
                       printf("\n\n\t\t Your Paybale amount is : %d",b_pay);
                       break;
                case 2:printf("\n\n\tYour Selection is Hara Bhara Kebab");
                       printf("choose your quantity : ");
                       scanf("%d",&veg);
                       b_pay=veg*120;
                       printf("\n\n\t\t Your Paybale amount is : %d",b_pay);
                       break;
                case 3:printf("\n\n\tYour Selection is PaneerTikka");
                       printf("choose your quantity : ");
                       scanf("%d",&veg);
                       b_pay=veg*80;
                       printf("\n\n\t\t Your Paybale amount is : %d",b_pay);
                       break;
                case 4:printf("\n\n\tYour Selection is Chilly potatos");
                       printf("choose your quantity : ");
                       scanf("%d",&veg);
                       b_pay=veg*80;
                       printf("\n\n\t\t Your Paybale amount is : %d",b_pay);
                       break;
                case 5:printf("\n\n\tYour Selection is Non-Veg Sandwich");
                       printf("choose your quantity : ");
                       scanf("%d",&veg);
                       b_pay=veg*120;
                       printf("\n\n\t\t Your Paybale amount is : %d",b_pay);
                       break;
                case 6:printf("\n\n\tYour Selection is Chicken Tikka");
                       printf("choose your quantity : ");
                       scanf("%d",&veg);
                       b_pay=veg*220;
                       printf("\n\n\t\t Your Paybale amount is : %d",b_pay);
                       break;
                case 7:printf("\n\n\tYour Selection is Seek Kebab");
                       printf("choose your quantity : ");
                       scanf("%d",&veg);
                       b_pay=veg*180;
                       printf("\n\n\t\t Your Paybale amount is : %d",b_pay);
                       break;
                case 8:printf("\n\n\tYour Selection is Roasted Chicken Leg");
                       printf("choose your quantity : ");
                       scanf("%d",&veg);
                       b_pay=veg*120;
                       printf("\n\n\t\t Your Paybale amount is : %d",b_pay);
                       break;

                       
              }
              break;
        case 2:printf("\nYour Selection is No.2 Lunch");
              printf("\n\t\t LUNCH OPTIONS ");
              Printf("\n\ta.Veg-Dishes");
              printf("\n\t1. -    50/-\n\t2.Hara Bhara Kebab -    120/-\n\t3.PaneerTikka -    80/-\n\t4.Chilly potatos -    80/-");
              printf("\n\t\tb.Non-veg Dishes");
              printf("\n\t5.Non-Veg Sandwich -    120/-\n\t6.Chicken Tikka -    220/-\n\t7.Seek Kebab -   180/-\n\t8.Roasted Chicken Leg -   120/-");
              break;
        case 3:printf("\nYour Selection is No.1 Breakfast");
              printf("\n\t\t BREAKFAST OPTIONS ");
              Printf("\n\ta.Veg-Dishes");
              printf("\n\t1.Dal Fry -    80/half\n\t2.Jeera Dal -    80/half\n\t3.PaneerTikka -    80/-\n\t4.Chilly potatos -    80/-");
              printf("\n\t\tb.Non-veg Dishes");
              printf("\n\t5.Non-Veg Sandwich -    120/-\n\t6.Chicken Tikka -    220/-\n\t7.Seek Kebab -   180/-\n\t8.Roasted Chicken Leg -   120/-");
              break;
        case 4:printf("\nYour Selection is No.1 Breakfast");
              printf("\n\t\t BREAKFAST OPTIONS ");
              Printf("\n\ta.Veg-Dishes");
              printf("\n\t1.Veg Sandwich -    50/-\n\t2.Hara Bhara Kebab -    120/-\n\t3.PaneerTikka -    80/-\n\t4.Chilly potatos -    80/-");
              printf("\n\t\tb.Non-veg Dishes");
              printf("\n\t5.Non-Veg Sandwich -    120/-\n\t6.Chicken Tikka -    220/-\n\t7.Seek Kebab -   180/-\n\t8.Roasted Chicken Leg -   120/-")
        case 5:printf("\nYour Selection is No.1 Breakfast");
              printf("\n\t\t BREAKFAST OPTIONS ");
              Printf("\n\ta.Veg-Dishes");
              printf("\n\t1.Veg Sandwich -    50/-\n\t2.Hara Bhara Kebab -    120/-\n\t3.PaneerTikka -    80/-\n\t4.Chilly potatos -    80/-");
              printf("\n\t\tb.Non-veg Dishes");
              printf("\n\t5.Non-Veg Sandwich -    120/-\n\t6.Chicken Tikka -    220/-\n\t7.Seek Kebab -   180/-\n\t8.Roasted Chicken Leg -   120/-")
        case 6:printf("\nYour Selection is No.1 Breakfast");
              printf("\n\t\t BREAKFAST OPTIONS ");
              Printf("\n\ta.Veg-Dishes");
              printf("\n\t1.Veg Sandwich -    50/-\n\t2.Hara Bhara Kebab -    120/-\n\t3.PaneerTikka -    80/-\n\t4.Chilly potatos -    80/-");
              printf("\n\t\tb.Non-veg Dishes");
              printf("\n\t5.Non-Veg Sandwich -    120/-\n\t6.Chicken Tikka -    220/-\n\t7.Seek Kebab -   180/-\n\t8.Roasted Chicken Leg -   120/-")
        case 1:printf("\nYour Selection is No.1 Breakfast");
              printf("\n\t\t BREAKFAST OPTIONS ");
              Printf("\n\ta.Veg-Dishes");
              printf("\n\t1.Veg Sandwich -    50/-\n\t2.Hara Bhara Kebab -    120/-\n\t3.PaneerTikka -    80/-\n\t4.Chilly potatos -    80/-");
              printf("\n\t\tb.Non-veg Dishes");
              printf("\n\t5.Non-Veg Sandwich -    120/-\n\t6.Chicken Tikka -    220/-\n\t7.Seek Kebab -   180/-\n\t8.Roasted Chicken Leg -   120/-")
                        
          
    }

}

