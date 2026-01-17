#include <stdio.h>

// Clear input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Validate that amount is positive
int isValidAmount(float amount) {
    return (amount > 0);
}
