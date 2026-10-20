#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CUSTOMERS 10

// structure to hold customer information
typedef struct {
    char name[50];
    int account_number;
    double balance;
} Customer;

// function to display customer information
void displayCustomer(Customer customer) {
    printf("Name: %s\n", customer.name);
    printf("Account Number: %d\n", customer.account_number);
    printf("Balance: $%.2f\n", customer.balance);
}

int main() {
    // initialize the customer array
    Customer customers[MAX_CUSTOMERS];
    int num_customers = 0;

    int choice;
    do {
        // display the menu
        printf("\n1. Add customer\n");
        printf("2. Retrieve customer information\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // add a new customer
                if (num_customers == MAX_CUSTOMERS) {
                    printf("Error: maximum number of customers reached.\n");
                }
                else {
                    Customer customer;
                    printf("Enter customer name: ");
                    scanf("%s", customer.name);
                    printf("Enter account number: ");
                    scanf("%d", &customer.account_number);
                    printf("Enter starting balance: ");
                    scanf("%lf", &customer.balance);
                    customers[num_customers++] = customer;
                    printf("Customer added successfully.\n");
                }
                break;
            case 2:
                // retrieve customer information
                if (num_customers == 0) {
                    printf("Error: no customers to retrieve.\n");
                }
                else {
                    int account_number;
                    printf("Enter account number: ");
                    scanf("%d", &account_number);
                    int customer_found = 0;
                    for (int i = 0; i < num_customers; i++) {
                        if (customers[i].account_number == account_number) {
                            displayCustomer(customers[i]);
                            customer_found = 1;
                            break;
                        }
                    }
                    if (!customer_found) {
                        printf("Error: customer not found.\n");
                    }
                }
                break;
            case 3:
                // exit the program
                printf("Goodbye!\n");
                break;
            default:
                // invalid choice
                printf("Error: invalid choice.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}
