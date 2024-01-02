// #include <stdio.h>
// int func(int *farr[], int x)
// {
//     int count;
//     for (int i = 0; i < x; i++)
//     {
//         count = count + farr[i];
//     }
//     printf("The value of sum of array is : %d", count);
// }

// int main()
// {
//     int arr[] = {5, 6, 8, 4, 3, 4, 5, 4};
//     int *ptr = arr;
//     func(ptr, 8);
//     return 0;
// }
#include <stdio.h>

int func(int *farr, int x)
{
    int count = 0; // Initialize count to 0
    for (int i = 0; i < x; i++)
    {
        count = count + farr[i];
    }
    printf("The value of the sum of the array is: %d", count);
}

int main()
{
    int arr[] = {5, 6, 8, 4, 3, 4, 5, 4};
    int *ptr = arr;
    func(ptr, 8);
    return 0;
}
