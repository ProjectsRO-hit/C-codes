#include <stdio.h>

void reverseSymmetry(int a);

int main() {
    int a = 3;
    reverseSymmetry(a);
    return 0;
}

// for n=3 (reversed)
// *****
//  ***
//   *

void reverseSymmetry(int a) {
    if (a == 1) {
        for (int i = 0; i < 2 * a - 1; i++) {
            printf("*");
        }
        printf("\n");
        return;
    }

    for (int i = 0; i < 2 * a - 1; i++) {
        printf("*");
    }
    printf("\n");

    reverseSymmetry(a - 1);
}
