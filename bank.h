#ifndef BANK_H
#define BANK_H

struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

// Function declarations
void createAccount();
void displayAllAccounts();
void depositMoney();
void withdrawMoney();
void checkBalance();

#endif
