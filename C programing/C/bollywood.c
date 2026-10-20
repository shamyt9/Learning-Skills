#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>   // for sleep() (Linux / Mac)

/* COLORS */
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

void header();
void loading(char msg[]);

int main() {
    int choice;
    char again;

    do {
        header();

        printf(BLUE "Choose your MEME SITUATION:\n" RESET);
        printf("1. Exam Preparation\n");
        printf("2. Coding Confidence\n");
        printf("3. Money Status\n");
        printf("4. Life Motivation\n");
        printf("5. Sleep Schedule\n");
        printf("---------------------------------\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        printf("\n");

        /* MEME CONDITIONS */
        if (choice == 1) {
            loading("Checking syllabus");
            printf(GREEN "Status: Sab aata hai\n" RESET);

            loading("Brain processing");
            printf(RED "Reality: Kuch nahi aata\n" RESET);

        } else if (choice == 2) {
            loading("Running code");
            printf(GREEN "Message: Code perfect hai\n" RESET);

            loading("Compiler thinking");
            printf(RED "Error: Error at line 1\n" RESET);

        } else if (choice == 3) {
            loading("Opening wallet");
            printf(GREEN "Hope: Paisa aa gaya hoga\n" RESET);

            loading("Checking balance");
            printf(RED "Reality: Rs 0.00\n" RESET);

        } else if (choice == 4) {
            loading("Motivation loading");
            printf(GREEN "Thought: Aaj kuch bada karunga\n" RESET);

            loading("Time passing");
            printf(RED "Status: Phone chalate chalate din khatam\n" RESET);

        } else if (choice == 5) {
            loading("Sleep plan loading");
            printf(GREEN "Plan: Aaj jaldi soyenge\n" RESET);

            loading("Clock checking");
            printf(RED "Reality: 3:47 AM\n" RESET);

        } else {
            loading("Thinking");
            printf(RED "Result: Galat choice bhi ek choice hoti hai\n" RESET);
        }

        /* EXTRA MEME SWITCH */
        printf(CYAN "\nBONUS MEME LEVEL\n" RESET);
        printf("Select confidence level (1-3): ");
        int level;
        scanf("%d", &level);

        loading("Analyzing confidence");

        switch (level) {
            case 1:
                printf(RED "Confidence: Low\n" RESET);
                printf("Meme: Mujhse na ho payega\n");
                break;

            case 2:
                printf(YELLOW "Confidence: Medium\n" RESET);
                printf("Meme: Dekhte hain\n");
                break;

            case 3:
                printf(GREEN "Confidence: High\n" RESET);
                printf("Meme: Bhai ye toh easy hai\n");
                loading("Reality check");
                printf(RED "Reality: Hard nikla\n" RESET);
                break;

            default:
                printf(RED "Confidence: Confused\n" RESET);
                printf("Meme: Main kaun hoon? Main kahan hoon?\n");
        }

        printf(YELLOW "\nRun again? (Y/N): " RESET);
        scanf(" %c", &again);

    } while (again == 'Y' || again == 'y');

    loading("Exiting program");
    printf(GREEN "Program closed successfully... kind of\n" RESET);
    return 0;
}

/* HEADER */
void header() {
    system("clear || cls");
    printf(CYAN);
    printf("=================================================\n");
    printf("        MEME BASED LOADING SYSTEM IN C\n");
    printf("=================================================\n");
    printf(RESET);
}

/* LOADING FUNCTION */
void loading(char msg[]) {
    printf(YELLOW "%s", msg);
    fflush(stdout);

    for (int i = 0; i < 3; i++) {
        printf(".");
        fflush(stdout);
        sleep(1);   // for Windows use: Sleep(1000);
    }

    printf("\n" RESET);
}
