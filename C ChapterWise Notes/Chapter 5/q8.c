#include <stdio.h>
void functionprint(int x)
{
    int i, j;
    for (i = 1; i <= x; i += 2)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int x = 5;
    functionprint(x);
    return 0;
}