#include <stdio.h>
int sum(int *a, int *b);
int average(int *a, int *b);
int main()
{
    int x = 25;
    int y = 33;
    sum(&x, &y);
    average(&x, &y);
    return 0;
}

int sum(int *a, int *b)
{
    int temp = *a + *b;
    printf("The sum is %d\n", temp);
}

int average(int *a, int *b)
{
    int temp = (*a + *b)/2;
    printf("The average is %d\n", temp);
}