#include <stdio.h>
#include "bank.h"

int main() {
    int choice;
    do {
        printf("\n========== BANK MANAGEMENT SYSTEM ==========\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("0. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                createAccount();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withdrawMoney();
                break;
            case 4:
                checkBalance();
                break;
            case 5:
                displayAllAccounts();
                break;
            case 0:
                printf("Exiting the program. Thank You!\n");
                break;
            default:
                printf("Enter a valid choice. Try Again!\n");
        }
    } while(choice != 0);

    return 0;
}
