#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

#define SLEEP_MS(ms) Sleep(ms)

/* Set console text color (Windows only) */
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

/* Clear screen */
void clearScreen() {
    system("cls");
}

/* Print centered text */
void printCentered(const char *text, int width) {
    int len = strlen(text);
    int pad = (width - len) / 2;
    for (int i = 0; i < pad; i++) printf(" ");
    printf("%s\n", text);
}

/* Draw square */
void drawSquare(int size) {
    for (int r = 0; r < size; r++) {
        for (int c = 0; c < size; c++) {
            if (r == 0 || r == size-1 || c == 0 || c == size-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

/* Draw triangle */
void drawTriangle(int height) {
    for (int r = 1; r <= height; r++) {
        for (int i = 0; i < r; i++) printf("*");
        printf("\n");
    }
}

/* Draw diamond */
void drawDiamond(int r) {
    for (int i = -r; i <= r; i++) {
        int a = abs(i);
        for (int j = 0; j < r - a; j++) printf(" ");
        for (int j = 0; j < 2*(r-a)+1; j++) printf("*");
        printf("\n");
    }
}

/* Draw circle (ASCII approximation) */
void drawCircle(int radius) {
    for (int y = radius; y >= -radius; y--) {
        for (int x = -radius; x <= radius; x++) {
            double val = x*x + (y*2)*(y*2);
            if (val <= radius*radius + radius)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

/* Draw a house structure */
void drawHouse() {
    printCentered("   /\\   ", 40);
    printCentered("  /  \\  ", 40);
    printCentered(" /____\\ ", 40);
    printCentered("| .--. |", 40);
    printCentered("| |  | |", 40);
    printCentered("|_|__|_|", 40);
}

/* Combined structure */
void drawStructure() {
    drawCircle(4);
    printf("\n");
    drawHouse();
    printf("\n");
    drawSquare(12);
}

/* Spinner animation */
void spinner(int step) {
    char s[] = "|/-\\";
    printf("\n[%c] Press Ctrl+C to stop\n", s[step % 4]);
}

int main() {
    int shape = 0;
    int step = 0;
    int color = 1;

    while (1) {   // infinite loop
        clearScreen();

        setColor(color);
        printCentered("=== ANIMATED SHAPES IN C (WINDOWS VERSION) ===", 80);
        printf("\n");

        switch (shape) {
        case 0:
            printCentered("Square", 80);
            drawSquare(12);
            break;
        case 1:
            printCentered("Triangle", 80);
            drawTriangle(12);
            break;
        case 2:
            printCentered("Diamond", 80);
            drawDiamond(7);
            break;
        case 3:
            printCentered("Circle", 80);
            drawCircle(8);
            break;
        case 4:
            printCentered("House + Platform", 80);
            drawStructure();
            break;
        }

        spinner(step);

        SLEEP_MS(400);

        step++;
        color = (color % 15) + 1;   // color cycle (1 to 15)
        if (step % 6 == 0)
            shape = (shape + 1) % 5;  // move to next shape
    }

    return 0;
}
