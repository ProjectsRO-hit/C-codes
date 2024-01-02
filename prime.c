// #include <stdio.h>

// int main() {
//     int n;
//     printf("Input the number you want to check if it's prime or not.\n");
//     scanf("%d", &n);

//     if (n <= 1) {
//         printf("The given number %d is not prime.\n", n);
//     }
//     else {
//         int is_prime = 1; // Assume the number is prime initially

//         for (int i = 2; i <= n/2; i++) {
//             if (n % i == 0) {
//                 is_prime = 0; // If divisible by any number other than 1 and itself, not prime
//                 break; // No need to continue checking
//             }
//         }

//         if (is_prime) {
//             printf("The given number %d is prime.\n", n);
//         } else {
//             printf("The given number %d is not prime.\n", n);
//         }
//     }

//     return 0;
// }






// #include <stdio.h>

// int main() {
//     int n;
//     printf("Input the number you want to check if it's prime or not.\n");
//     scanf("%d", &n);

//     if (n <= 1) {
//         printf("The given number %d is not prime.\n", n);
//         return 0;
//     }

//     int is_prime = 1; // Assume the number is prime initially
//     int i = 2; // Starting divisor

//     while (i <= n/2) {
//         if (n % i == 0) {
//             is_prime = 0; // If divisible by any number other than 1 and itself, not prime
//             break; // No need to continue checking
//         }
//         i++;
//     }

//     if (is_prime) {
//         printf("The given number %d is prime.\n", n);
//     } else {
//         printf("The given number %d is not prime.\n", n);
//     }

//     return 0;
// }


#include <stdio.h>

int main() {
    int n;
    printf("Input the number you want to check if it's prime or not.\n");
    scanf("%d", &n);

    if (n <= 1) {
        printf("The given number %d is not prime.\n", n);
        return 0;
    }

    int is_prime = 1; // Assume the number is prime initially
    int i = 2; // Starting divisor

    do {
        if (n % i == 0) {
            is_prime = 0; // If divisible by any number other than 1 and itself, not prime
            break; // No need to continue checking
        }
        i++;
    } while (i <= n/2);

    if (is_prime) {
        printf("The given number %d is prime.\n", n);
    } else {
        printf("The given number %d is not prime.\n", n);
    }

    return 0;
}
