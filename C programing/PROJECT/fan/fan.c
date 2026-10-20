#include <stdio.h>
#include <unistd.h> // for usleep function
#include <math.h>   // for fmod function

void clearScreen() {
    printf("\033[H\033[J"); // Clear screen (works on Unix-like systems)
}

void printFanLine(int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("+");
    }
    printf("\n");
}

void rotateFanLine(int size, double *rotation_angle) {
    int i, j;

    clearScreen();

    // Calculate rotation angle in radians
    double rotation_radians = *rotation_angle * 3.14159265 / 180.0;

    // Calculate center position
    int center = size / 2;

    // Print fan line with rotation
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            // Calculate rotated coordinates
            double x = j - center;
            double y = center - i;
            int x_rotated = (int)(x * cos(rotation_radians) - y * sin(rotation_radians) + center);
            int y_rotated = (int)(x * sin(rotation_radians) + y * cos(rotation_radians) + center);

            // Check if the current position should contain a star
            if (x_rotated >= 0 && x_rotated < size && y_rotated >= 0 && y_rotated < size && y_rotated == center) {
                printf("+");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int size = 20; // Adjust the size of the fan line
    double rotation_angle = 0.0; // Initial rotation angle

    clearScreen();
    printFanLine(size);
    usleep(100000); // Initial delay before rotation starts

    while (1) {
        rotateFanLine(size, &rotation_angle);
        usleep(50); // Adjust the value for the rotation speed
        rotation_angle = fmod(rotation_angle + 5.0, 360.0); // Wrap the rotation angle within 0 to 360 degrees
    }

    return 0;
}
