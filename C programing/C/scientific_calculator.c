#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* COLORS */
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

/* FUNCTION DECLARATIONS */
void header();
void menu();
int safeInt();
double safeDouble();
long long factorial(int);

/* MAIN */
int main() {
    menu();
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

/* SAFE DOUBLE INPUT */
double safeDouble() {
    double x;
    char ch;
    if (scanf("%lf", &x) != 1) {
        while ((ch = getchar()) != '\n' && ch != EOF);
        return -1;
    }
    return x;
}

/* HEADER UI */
void header() {
    system("clear || cls");
    printf(CYAN);
    printf("=================================================\n");
    printf("           SCIENTIFIC CALCULATOR\n");
    printf("=================================================\n");
    printf(RESET);
}

/* FACTORIAL */
long long factorial(int n) {
    if (n < 0) return -1;
    long long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

/* MENU */
void menu() {
    int choice;
    double a, b;

    do {
        header();
        printf(BLUE);
        printf(" 1. Addition\n");
        printf(" 2. Subtraction\n");
        printf(" 3. Multiplication\n");
        printf(" 4. Division\n");
        printf(" 5. Power (x^y)\n");
        printf(" 6. Square Root\n");
        printf(" 7. Sin(x)\n");
        printf(" 8. Cos(x)\n");
        printf(" 9. Tan(x)\n");
        printf("10. Log10(x)\n");
        printf("11. Natural Log ln(x)\n");
        printf("12. Factorial\n");
        printf("13. Exit\n");
        printf("-------------------------------------------------\n");
        printf(RESET);

        printf(YELLOW "Enter your choice: " RESET);
        choice = safeInt();

        if (choice == -1) {
            printf(RED "Invalid input! Numbers only.\n" RESET);
            getchar();
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                a = safeDouble(); b = safeDouble();
                printf(GREEN "Result = %.2lf\n" RESET, a + b);
                break;

            case 2:
                printf("Enter two numbers: ");
                a = safeDouble(); b = safeDouble();
                printf(GREEN "Result = %.2lf\n" RESET, a - b);
                break;

            case 3:
                printf("Enter two numbers: ");
                a = safeDouble(); b = safeDouble();
                printf(GREEN "Result = %.2lf\n" RESET, a * b);
                break;

            case 4:
                printf("Enter two numbers: ");
                a = safeDouble(); b = safeDouble();
                if (b == 0)
                    printf(RED "Division by zero error\n" RESET);
                else
                    printf(GREEN "Result = %.2lf\n" RESET, a / b);
                break;

            case 5:
                printf("Enter base and power: ");
                a = safeDouble(); b = safeDouble();
                printf(GREEN "Result = %.2lf\n" RESET, pow(a, b));
                break;

            case 6:
                printf("Enter number: ");
                a = safeDouble();
                if (a < 0)
                    printf(RED "Invalid input\n" RESET);
                else
                    printf(GREEN "Result = %.2lf\n" RESET, sqrt(a));
                break;

            case 7:
                printf("Enter angle (degrees): ");
                a = safeDouble();
                printf(GREEN "Sin = %.2lf\n" RESET, sin(a * M_PI / 180));
                break;

            case 8:
                printf("Enter angle (degrees): ");
                a = safeDouble();
                printf(GREEN "Cos = %.2lf\n" RESET, cos(a * M_PI / 180));
                break;

            case 9:
                printf("Enter angle (degrees): ");
                a = safeDouble();
                printf(GREEN "Tan = %.2lf\n" RESET, tan(a * M_PI / 180));
                break;

            case 10:
                printf("Enter number: ");
                a = safeDouble();
                if (a <= 0)
                    printf(RED "Invalid input\n" RESET);
                else
                    printf(GREEN "Log10 = %.2lf\n" RESET, log10(a));
                break;

            case 11:
                printf("Enter number: ");
                a = safeDouble();
                if (a <= 0)
                    printf(RED "Invalid input\n" RESET);
                else
                    printf(GREEN "ln = %.2lf\n" RESET, log(a));
                break;

            case 12: {
                int n;
                printf("Enter integer: ");
                n = safeInt();
                long long f = factorial(n);
                if (f < 0)
                    printf(RED "Invalid input\n" RESET);
                else
                    printf(GREEN "Factorial = %lld\n" RESET, f);
                break;
            }

            case 13:
                printf(GREEN "\nCalculator Closed. Thank You!\n" RESET);
                break;

            default:
                printf(RED "Invalid choice\n" RESET);
        }

        printf(YELLOW "\nPress Enter to continue..." RESET);
        getchar(); getchar();

    } while (choice != 13);
}

