#include <stdio.h>

// Function to print the pattern without spaces
void printPattern(int n) {
    int i, j;

    for (i = 1; i <= n; i += 2) {
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }
}

int main() {
    int n = 5; // Number of rows in the pattern
    printPattern(n);
    return 0;
}
