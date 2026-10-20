#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;35m"
#define BOLD "\033[1m"
#define RESET "\033[0m"

void play_game(int max_number)
{
    int number,guess,attempt=0;
    srand(time(0));
    number=rand()%max_number+1;
    printf(YELLOW"I have chosen a number between 1 and %d. Try to guess it!!"RESET,max_number);
    do{
        printf(BOLD"\nEnter your guessing: \n"RESET);
        scanf("%d",&guess);
        attempt++;

        if(guess>number)
        {
            printf(RED"Too High! Try again\n"RESET);
        }
        else if(guess<number)
        {
            printf(RED"Too low! Try again\n"RESET);
        }
        else{
             printf(GREEN"CONGRATULATIONS! YOU GUESSED IT IN %d attempts.\n"RESET,attempt);
        }
    }while(guess!=number);

}

int main()
{
   char play_again;
   do{
         print_banner();
         int max_number=select_level();
         play_game(max_number);
         printf(CYAN"\n\nDo you want to play again (y/n): "RESET);
         scanf(" %c",&play_again);
   }while(play_again=='y' || play_again=='Y');

   printf(GREEN"\nTHANKS FOR PLAYING! HOPE YOU ENJOYED IT\n"RESET);

   return 0;
}

int select_level()
{
    int choice;
    printf(CYAN"\n      SELECT DIFFICULTY LEVEL\n"RESET);
    printf(RED"------------------------------------------------\n"RESET);
    printf(YELLOW"1.Easy (1-50)\n");
    printf("2.Medium (1-100)\n");
    printf("3.Hard (1-500)\n");
    printf("4.Exist\n"RESET);
    printf("Your Choice is:  ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: return 50;
        case 2: return 100;
        case 3: return 500;
        case 4: return;
        default:
            printf(RED"Invalid choice,Defaulting to Medium\n"RESET);
            return 100;
    }

}


void print_banner()
{
    printf(YELLOW"======================================================\n"RESET);
    printf(GREEN"       WELCOME TO GUESS THE NUMBER GAME                    \n"RESET);
    printf(YELLOW"======================================================\n"RESET);
}
