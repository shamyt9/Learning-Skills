#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess, attempts = 0;
    char playAgain;

    // Seed the random number generator
    srand(time(NULL));

    do {
        // Generate a random number between 1 and 100
        randomNumber = rand() % 100 + 1;

        printf("Welcome to the Guessing Game!\n");
        printf("I have chosen a number between 1 and 100. Try to guess it!\n\n");

        // Game loop
        do {
            printf("Enter your guess (or enter 0 to see the answer): ");
            scanf("%d", &guess);
            attempts++;

            // Check if the user wants to see the answer
            if (guess == 0) {
                printf("The correct answer is: %d\n", randomNumber);
                break;
            }

            // Check if the guess is correct
            if (guess == randomNumber) {
                printf("Congratulations! You guessed the number %d in %d attempts.\n", randomNumber, attempts);
                break;
            } else if (guess < randomNumber) {
                printf("Too low. Try again!\n");
            } else {
                printf("Too high. Try again!\n");
            }

        } while (1);

        // Ask if the player wants to play again
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);

        // Reset attempts counter for the new game
        attempts = 0;

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thank you for playing!\n");

    return 0;
}
