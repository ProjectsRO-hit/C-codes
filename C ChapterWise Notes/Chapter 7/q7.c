
#include <stdio.h>

int main()
{
    int arr[3][10];
    int arr2[] = {2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = arr2[i] * (j + 1);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf(" %d * %d = %d\n", arr2[i], j+1, arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}