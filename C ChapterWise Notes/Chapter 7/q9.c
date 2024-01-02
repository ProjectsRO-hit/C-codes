#include <stdio.h>

int main()
{
    int arr[2][5][7];
    int *ptr[2][5][7];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 7; k++)
            {
                printf("The address in increasing order is : %u\n", &ptr[i][j][k]);
            }
        }
    }

    return 0;
}
// #include <stdio.h>

// int main()
// {
//     int arr[2][5][7];
//     int (*ptr)[5][7] = arr; // Declare ptr as a pointer to a 2D array of size [5][7]

//     // Initialize the array and assign addresses
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             for (int k = 0; k < 7; k++){ // Fix the loop condition here
//                 ptr[i][j][k] = i * 100 + j * 10 + k; // Assign values for demonstration
//             }
//         }
//     }

//     // Print addresses and values
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             for (int k = 0; k < 7; k++){ // Fix the loop condition here
//                 printf("The address is : %p, The value is: %d\n", &ptr[i][j][k], ptr[i][j][k]);
//             }
//         }
//     }

//     return 0;
// }
