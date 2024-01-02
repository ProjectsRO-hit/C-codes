#include <stdio.h>
void sym(int x);

int main()
{
    int num=3;
    sym(num);
    return 0;
}

void sym(int x)
{
    if (x == 1)
    {
        printf("*\n");
        return;
    }
    sym(x - 1);
    for (int i = 0; i < (2 * x - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}