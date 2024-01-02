#include <stdio.h>
int average(int a, int b, int c)
{
    int calc;
    calc = (a + b + c) / 3;
    return calc;
}

int main()
{
    int n1, n2, n3; // to store numbers
    printf("Please input three numbers\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    int avg = average(n1, n2, n3);
    printf("The average of the given numbers is : %d", avg);
    return 0;
}