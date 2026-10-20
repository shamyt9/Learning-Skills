#include <stdio.h>
#include <string.h>

/* COLORS */
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

/* GLOBAL COUNTER */
long long count;

/* FUNCTION DECLARATIONS */
void header();
void swap(char *a, char *b);
void permute(char str[], int l, int r);
long long factorial(int n);

/* MAIN */
int main() {
    char input[20];
    char choice;
    int len;

    do {
        count = 0;   // reset counter each run

        header();

        printf(YELLOW "Enter a word or number: " RESET);
        scanf("%s", input);

        len = strlen(input);

        if (len > 10) {
            printf(RED "Input too long! Max 10 characters allowed.\n" RESET);
        } else {
            printf(BLUE "\nTotal Possible Permutations: %lld\n" RESET, factorial(len));
            printf(GREEN "\n=========== ALL PERMUTATIONS ===========\n" RESET);

            permute(input, 0, len - 1);

            printf(GREEN "=======================================\n" RESET);
            printf(BLUE "Total Generated Permutations: %lld\n" RESET, count);
        }

        printf(YELLOW "\nDo you want to try again? (Y/N): " RESET);
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf(GREEN "\nProgram Ended. Thank You!\n" RESET);
    return 0;
}

/* HEADER */
void header() {
    printf(CYAN);
    printf("=================================================\n");
    printf("     PERMUTATION & COMBINATION GENERATOR\n");
    printf("=================================================\n");
    printf(RESET);
}

/* SWAP */
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

/* PERMUTATION */
void permute(char str[], int l, int r) {
    if (l == r) {
        printf(GREEN "%lld. %s\n" RESET, ++count, str);
        return;
    }

    for (int i = l; i <= r; i++) {
        swap(&str[l], &str[i]);
        permute(str, l + 1, r);
        swap(&str[l], &str[i]);   // backtracking
    }
}

/* FACTORIAL */
long long factorial(int n) {
    long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}
