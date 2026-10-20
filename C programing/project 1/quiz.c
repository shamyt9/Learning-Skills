#include <stdio.h>
#include <conio.h>

int main() {
    int position = 0;

    while (1) {
        // Clear the screen
        system("cls");

        // Print the character at the current position
        for (int i = 0; i < position; i++) {
            printf(" ");
        }
        printf(" O\n");
        for (int i = 0; i < position; i++) {
            printf(" ");
        }
        printf("/|\\ \n");
        for (int i = 0; i < position; i++) {
            printf(" ");
        }
        printf("/ \\\n");

        // Check if a key has been pressed
        if (kbhit()) {
            char key = getch();
            if (key == 'a') {
                position--;
            } else if (key == 'd') {
                position++;
            }
        }

        // Pause for a short amount of time
        for (int i = 0; i < 10000000; i++) {}

        // Increase the position
        position++;
    }

    return 0;
}
