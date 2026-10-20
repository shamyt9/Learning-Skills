#include <stdio.h>
#include <stdlib.h>

/* COLORS */
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define BLUE "\033[1;34m"
#define CYAN "\033[1;36m"
#define RESET "\033[0m"

/* FUNCTION DECLARATIONS */
int safeInt();
float calculateBill(int units);
void header();
void billUI();

/* MAIN */
int main() {
    billUI();
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

/* HEADER UI */
void header() {
    system("clear || cls");
    printf(CYAN);
    printf("=====================================================\n");
    printf("           ELECTRICITY BILL FINDER SYSTEM\n");
    printf("=====================================================\n");
    printf(RESET);
}

/* BILL UI */
void billUI() {
    int prevReading, currReading, units;
    float billAmount, gst, total;
    char name[30];

    header();

    printf(YELLOW "Enter Consumer Name: " RESET);
    scanf(" %[^\n]", name);

    printf(YELLOW "Enter Previous Meter Reading: " RESET);
    prevReading = safeInt();
    if (prevReading < 0) {
        printf(RED "Invalid Reading!\n" RESET);
        return;
    }

    printf(YELLOW "Enter Current Meter Reading: " RESET);
    currReading = safeInt();
    if (currReading < prevReading) {
        printf(RED "Current reading must be greater!\n" RESET);
        return;
    }

    units = currReading - prevReading;
    billAmount = calculateBill(units);
    gst = billAmount * 0.05;
    total = billAmount + gst + 75;

    /* BILL DISPLAY */
    printf(GREEN);
    printf("\n================ ELECTRICITY BILL ==================\n");
    printf("Consumer Name     : %s\n", name);
    printf("Previous Reading  : %d units\n", prevReading);
    printf("Current Reading   : %d units\n", currReading);
    printf("Units Consumed    : %d units\n", units);
    printf("----------------------------------------------------\n");
    printf("Energy Charges    : Rs %.2f\n", billAmount);
    printf("Fixed Charges     : Rs 75.00\n");
    printf("GST (5%%)          : Rs %.2f\n", gst);
    printf("----------------------------------------------------\n");
    printf("TOTAL PAYABLE     : Rs %.2f\n", total);
    printf("====================================================\n");
    printf("Payment Status    : SUCCESS\n");
    printf("====================================================\n");
    printf(RESET);
}

/* BILL CALCULATION */
float calculateBill(int units) {
    float amount = 0;

    if (units <= 100)
        amount = units * 1.50;
    else if (units <= 200)
        amount = (100 * 1.50) + (units - 100) * 2.50;
    else if (units <= 300)
        amount = (100 * 1.50) + (100 * 2.50) + (units - 200) * 4.00;
    else
        amount = (100 * 1.50) + (100 * 2.50) + (100 * 4.00) + (units - 300) * 6.00;

    return amount;
}

