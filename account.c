#include <stdio.h>
#include "bank.h"

// Create a new account
void createAccount() {
    struct Account acc;
    FILE *fp = fopen("accounts.dat", "ab");
    if (!fp) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d", &acc.accountNumber);
    printf("Enter Account Holder Name: ");
    scanf("%s", acc.name);
    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    fwrite(&acc, sizeof(struct Account), 1, fp);
    fclose(fp);

    printf("------------------------------------------\n");
    printf("Account Created Successfully!\n");
    printf("------------------------------------------\n");
}

// Display all accounts
void displayAllAccounts() {
    struct Account acc;
    FILE *fp = fopen("accounts.dat", "rb");
    if (!fp) {
        printf("No accounts found.\n");
        return;
    }

    printf("\n------ LIST OF ALL ACCOUNTS -------\n");
    while (fread(&acc, sizeof(struct Account), 1, fp)) {
        printf("Account Number: %d\n", acc.accountNumber);
        printf("Holder Name: %s\n", acc.name);
        printf("Account Balance: %.2f\n", acc.balance);
        printf("----------------------------------------\n");
    }

    fclose(fp);
}

