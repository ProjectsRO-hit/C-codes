#include <stdio.h>

int main()
{
    float x,y;
    printf("Enter your first number\n");
    scanf("%f", &x);
    printf("Enter your second number\n");
    scanf("%f", &y);
    printf("The sum of your given numbers are %f", x + y);
    return 0;
}