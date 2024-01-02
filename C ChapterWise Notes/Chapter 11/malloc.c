#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)malloc(4 * sizeof(int));
    for (int i = 0; i < 4; i++)
    {
        printf("Please input number %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int j = 0; j < 4; j++)
    {
         printf("Number %d: %d\n", j + 1, ptr[j]);
    }
    return 0;
}