#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define CYAN "\033[1;36m"
#define BOLD "\033[1m"

void print_banner() {
    printf(YELLOW"==========================================\n"RESET);
    printf(GREEN"        WELCOME TO GUESS THE NUMBER!       \n"RESET);
    printf(YELLOW"==========================================\n"RESET);
}

int select_level() {
    int choice;
    printf(CYAN"Select Difficulty Level:\n"RESET);
    printf("1. Easy (1-50)\n");
    printf("2. Medium (1-100)\n");
    printf("3. Hard (1-500)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: return 50;
        case 2: return 100;
        case 3: return 500;
        default: printf(RED"Invalid choice, defaulting to Medium.\n"RESET); return 100;
    }
}

void play_game(int max_number) {
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % max_number + 1;

    printf(YELLOW"I have chosen a number between 1 and %d. Try to guess it!\n"RESET, max_number);

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf(RED"Too high! Try again.\n"RESET);
        } else if (guess < number) {
            printf(RED"Too low! Try again.\n"RESET);
        } else {
            printf(GREEN"Congratulations! You guessed it in %d attempts.\n"RESET, attempts);
        }
    } while (guess != number);
}

int main() {
    char play_again;
    do {
        print_banner();
        int max_number = select_level();
        play_game(max_number);
        printf(CYAN"Do you want to play again? (y/n): "RESET);
        scanf(" %c", &play_again);
    } while (play_again == 'y' || play_again == 'Y');

    printf(GREEN"Thanks for playing! Goodbye!\n"RESET);
    return 0;
}
