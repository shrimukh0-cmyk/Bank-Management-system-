#include <stdio.h>
#include "bank.h"

// Forward declarations
void clearInputBuffer();
int isValidAmount(float amount);
int findAccount(int accNo, struct Account *acc);
int updateAccount(int accNo, struct Account *acc);

// Deposit money
void depositMoney() {
    struct Account acc;
    int accNo;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    clearInputBuffer();

    if (!findAccount(accNo, &acc)) {
        printf("Account not found.\n");
        return;
    }

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);
    clearInputBuffer();

    if (!isValidAmount(amount)) {
        printf("Invalid amount. Must be greater than 0.\n");
        return;
    }

    acc.balance += amount;

    if (updateAccount(accNo, &acc))
        printf("Deposit successful. New Balance: %.2f\n", acc.balance);
    else
        printf("Error updating account.\n");
}

// Withdraw money
void withdrawMoney() {
    struct Account acc;
    int accNo;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    clearInputBuffer();

    if (!findAccount(accNo, &acc)) {
        printf("Account not found.\n");
        return;
    }

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);
    clearInputBuffer();

    if (!isValidAmount(amount)) {
        printf("Invalid amount. Must be greater than 0.\n");
        return;
    }

    if (acc.balance >= amount) {
        acc.balance -= amount;
        if (updateAccount(accNo, &acc))
            printf("Withdrawal successful. New Balance: %.2f\n", acc.balance);
        else
            printf("Error updating account.\n");
    } else {
        printf("Insufficient balance.\n");
    }
}

// Check balance
void checkBalance() {
    struct Account acc;
    int accNo;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    clearInputBuffer();

    if (findAccount(accNo, &acc)) {
        printf("Account Holder: %s\n", acc.name);
        printf("Current Balance: %.2f\n", acc.balance);
    } else {
        printf("Account not found.\n");
    }
}
