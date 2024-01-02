#include <stdio.h>

int main()
{
    int arr[3][10];
    int arr2[3];
    printf("Please input three number of the required multiplication table\n");
    scanf("%d", &arr2[0]);
    scanf("%d", &arr2[1]);
    scanf("%d", &arr2[2]);
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