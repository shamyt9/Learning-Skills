#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 10

// structure to hold a menu item
typedef struct {
    char name[50];
    double price;
    int available;
} MenuItem;

// function to display the menu
void displayMenu(MenuItem menu[], int num_items) {
    printf("Menu:\n");
    for (int i = 0; i < num_items; i++) {
        printf("%d. %s ($%.2f) [%s]\n", i+1, menu[i].name, menu[i].price, menu[i].available ? "available" : "not available");
    }
    printf("\n");
}

// function to update the menu
void updateMenu(MenuItem menu[], int num_items) {
    int choice;
    do {
        printf("Enter the number of the item to update (or 0 to exit): ");
        scanf("%d", &choice);
        if (choice > 0 && choice <= num_items) {
            printf("Enter the new availability status for %s: ", menu[choice-1].name);
            scanf("%d", &menu[choice-1].available);
        }
    } while (choice != 0);
}

int main() {
    // initialize the menu
    MenuItem menu[MAX_ITEMS] = {
        {"Burger", 5.99, 1},
        {"Pizza", 7.99, 1},
        {"Salad", 4.99, 1},
        {"Fries", 2.99, 1},
        {"Ice Cream", 3.99, 1},
        {"Hot Dog", 4.99, 1},
        {"Chicken Sandwich", 6.99, 1},
        {"Steak", 12.99, 1},
        {"Fish and Chips", 8.99, 1},
        {"Sushi", 9.99, 1}
    };
    int num_items = 10;

    int choice;
    do {
        // display the menu and get the user's choice
        displayMenu(menu, num_items);
        printf("Enter your choice (or 0 to exit): ");
        scanf("%d", &choice);

        // update the menu if the user is the owner
        if (choice == -1) {
            updateMenu(menu, num_items);
        }
        // otherwise, show the price of the chosen item (if it is available)
        else if (choice > 0 && choice <= num_items) {
            if (menu[choice-1].available) {
                printf("The price of %s is $%.2f.\n\n", menu[choice-1].name, menu[choice-1].price);
            }
            else {
                printf("%s is not available.\n\n", menu[choice-1].name);
            }
        }
    } while (choice != 0);

    return 0;
}
