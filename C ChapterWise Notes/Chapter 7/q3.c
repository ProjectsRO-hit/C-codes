#include <stdio.h>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = (i + 1) * 5;
    }
    printf("The table of 5 is listed below\n");
    for (int i = 0; i < 10; i++)
    {
        printf(" 5 * %d = %d\n", i+1, arr[i]);
    }
    return 0;
}