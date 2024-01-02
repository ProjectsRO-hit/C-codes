#include <stdio.h>

// Function to calculate the factorial of a non-negative integer
unsigned long long factorial(int n)
{
    // Base case: factorial of 0 is 1
    if (n == 0)
        return 1;
    // Recursive case: factorial of n is n * factorial of (n-1)
    else
        return n * factorial(n - 1);
}

int main()
{
    int num = 5;
    unsigned long long result = factorial(num);
    printf("Factorial of %d = %llu\n", num, result);
    return 0;
}
