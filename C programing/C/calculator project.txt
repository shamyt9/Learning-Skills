#include <stdio.h>
#include <math.h>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define MAGENTA "\033[1;35m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

void showMenu();
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);
float percentage(float, float);
float square(float);
float squareRoot(float);

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        showMenu();
        printf(YELLOW "\nEnter your choice: " RESET);
        scanf("%d", &choice);

        if (choice == 0) {
            printf(RED "\n========================\n");
            printf("   Exiting Calculator   \n");
            printf("========================\n" RESET);
            break;
        }

        if (choice >= 1 && choice <= 5) {
            printf(CYAN "\nEnter two numbers: " RESET);
            scanf("%f %f", &num1, &num2);
        } else if (choice == 6 || choice == 7) {
            printf(CYAN "\nEnter a number: " RESET);
            scanf("%f", &num1);
        }

        printf(BLUE "\n------------------------\n" RESET);
        switch (choice) {
            case 1:
                result = add(num1, num2);
                printf(GREEN "   Result: %.2f\n" RESET, result);
                break;
            case 2:
                result = subtract(num1, num2);
                printf(GREEN "   Result: %.2f\n" RESET, result);
                break;
            case 3:
                result = multiply(num1, num2);
                printf(GREEN "   Result: %.2f\n" RESET, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = divide(num1, num2);
                    printf(GREEN "   Result: %.2f\n" RESET, result);
                } else {
                    printf(RED "   Error: Division by zero!\n" RESET);
                }
                break;
            case 5:
                result = percentage(num1, num2);
                printf(GREEN "   %.2f%% of %.2f is: %.2f\n" RESET, num1, num2, result);
                break;
            case 6:
                result = square(num1);
                printf(GREEN "   Square of %.2f is: %.2f\n" RESET, num1, result);
                break;
            case 7:
                if (num1 >= 0) {
                    result = squareRoot(num1);
                    printf(GREEN "   Square root of %.2f is: %.2f\n" RESET, num1, result);
                } else {
                    printf(RED "   Error: Negative input for square root!\n" RESET);
                }
                break;
            default:
                printf(RED "   Invalid choice! Try again.\n" RESET);
        }
        printf(BLUE "------------------------\n" RESET);
    }
    return 0;
}

void showMenu() {
    printf(MAGENTA "\n========================");
    printf("\n   SIMPLE CALCULATOR   ");
    printf("\n========================" RESET);
    printf(YELLOW "\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Percentage");
    printf("\n6. Square");
    printf("\n7. Square Root");
    printf("\n0. Exit" RESET);
    printf(MAGENTA "\n========================\n" RESET);
}

float add(float a, float b) {
    return a + b;
}
float subtract(float a, float b) {
    return a - b;
}
float multiply(float a, float b) {
    return a * b;
}
float divide(float a, float b) {
    return a / b;
}
float percentage(float a, float b) {
    return (a / 100) * b;
}
float square(float a) {
    return a * a;
}
float squareRoot(float a) {
    return sqrt(a);
}
