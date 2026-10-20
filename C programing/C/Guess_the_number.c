#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* COLORS */
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

/* FUNCTION DECLARATIONS */
void header();
void gameMenu();
void playGame(int maxNumber, int attempts, int level);
int safeInt();

/* MAIN */
int main() {
    srand(time(NULL));
    gameMenu();
    return 0;
}

/* SAFE INTEGER INPUT */
int safeInt() {
    int x;
    char ch;
    if (scanf("%d", &x) != 1) {
        while ((ch = getchar()) != '\n' && ch != EOF);
        return -1;
    }
    return x;
}

/* HEADER */
void header() {
    system("clear || cls");
    printf(CYAN);
    printf("=================================================\n");
    printf("           GUESS THE NUMBER GAME\n");
    printf("=================================================\n");
    printf(RESET);
}

/* GAME MENU */
void gameMenu() {
    int choice;
    do {
        header();
        printf(BLUE);
        printf("1. EASY   (1 - 10)\n");
        printf("2. MEDIUM (1 - 50)\n");
        printf("3. HARD   (1 - 100)\n");
        printf("4. EXIT\n");
        printf("-------------------------------------------------\n");
        printf(RESET);

        printf(YELLOW "Select Level: " RESET);
        choice = safeInt();

        if (choice == -1) {
            printf(RED "Invalid input! Enter number only.\n" RESET);
            getchar();
            continue;
        }

        switch (choice) {
            case 1: playGame(10, 5, 1); break;
            case 2: playGame(50, 7, 2); break;
            case 3: playGame(100, 10, 3); break;
            case 4:
                printf(GREEN "\nThank you for playing!\n" RESET);
                break;
            default:
                printf(RED "Invalid choice\n" RESET);
        }

        if (choice != 4) {
            printf(YELLOW "\nPress Enter to return to menu..." RESET);
            getchar(); getchar();
        }

    } while (choice != 4);
}

/* GAME LOGIC */
void playGame(int maxNumber, int attempts, int level) {
    int secret = rand() % maxNumber + 1;
    int guess;
    int score = attempts * 10;

    printf(CYAN "\nLevel %d Started!\n" RESET, level);
    printf("Guess the number between 1 and %d\n", maxNumber);

    for (int i = 1; i <= attempts; i++) {
        printf(YELLOW "Attempt %d/%d - Enter guess: " RESET, i, attempts);
        guess = safeInt();

        if (guess == -1) {
            printf(RED "Invalid input!\n" RESET);
            i--;
            continue;
        }

        if (guess == secret) {
            printf(GREEN "\nCorrect Guess!\n" RESET);
            printf(GREEN "You won with score: %d\n" RESET, score);
            return;
        } else if (guess < secret) {
            printf(RED "Too Low!\n" RESET);
        } else {
            printf(RED "Too High!\n" RESET);
        }

        score -= 10;
    }

    printf(RED "\nGAME OVER!\n" RESET);
    printf("The correct number was: %d\n", secret);
}

