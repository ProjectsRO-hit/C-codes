#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int)); // Allocate memory for 10 integers

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit with an error code
    }

    printf("Please enter your mobile phone number one digit at a time\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Your mobile number is: ");
    for (int j = 0; j < 10; j++)
    {
        printf("%d", ptr[j]);
    }

    free(ptr); // Free the allocated memory

    // Attempting to access the freed memory here will result in undefined behavior
    // printf("\n");
    // for (int x = 0; x < 10; x++)
    // {
    //     printf("%d", ptr[x]); // Do not access freed memory
    // }

    return 0;
}
