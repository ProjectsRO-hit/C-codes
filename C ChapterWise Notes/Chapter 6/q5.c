#include <stdio.h>

int main()
{
    int a = 10;
    int *i = &a;
    int **j = &i;
    printf("The value of a using pointer to pointer type is %d", **j);
    return 0;
}