#include <stdio.h>
#include "bank.h"

// Find account by account number
int findAccount(int accNo, struct Account *acc) {
    FILE *fp = fopen("accounts.dat", "rb");
    if (!fp) return 0;

    while (fread(acc, sizeof(struct Account), 1, fp)) {
        if (acc->accountNumber == accNo) {
            fclose(fp);
            return 1; // Found
        }
    }

    fclose(fp);
    return 0; // Not found
}

// Update account
int updateAccount(int accNo, struct Account *acc) {
    FILE *fp = fopen("accounts.dat", "rb+");
    if (!fp) return 0;

    struct Account temp;
    while (fread(&temp, sizeof(struct Account), 1, fp)) {
        if (temp.accountNumber == accNo) {
            fseek(fp, -sizeof(struct Account), SEEK_CUR);
            fwrite(acc, sizeof(struct Account), 1, fp);
            fclose(fp);
            return 1; // Success
        }
    }

    fclose(fp);
    return 0; // Not found
}
