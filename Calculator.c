#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    float number1, number2;
    printf("Welcome to Simple Calucator.\n");
    printf("What would you like to do? Type '1' for addition, '2' for subtraction, '3' for division,'4' for multiplication\n");
    scanf("%d", &x);
    if (x == 1)
    {
        printf("Input the first number\n");
        scanf("%f", &number1);
        printf("Input the second number\n");
        scanf("%f", &number2);
        printf("The sum of the given numbers are: %f\n", number1 + number2);
    }
    else if (x == 2)
    {
        printf("Input the first number\n");
        scanf("%f", &number1);
        printf("Input the second number\n");
        scanf("%f", &number2);
        printf("The subtraction of the given numbers are: %f\n", number1 - number2);
    }
    else if (x == 3)
    {
        printf("Input the first number\n");
        scanf("%f", &number1);
        printf("Input the second number\n");
        scanf("%f", &number2);
        printf("The division of the given numbers are: %f\n", number1 / number2);
    }
    else if (x == 4)
    {
        printf("Input the first number\n");
        scanf("%f", &number1);
        printf("Input the second number\n");
        scanf("%f", &number2);
        printf("The multiplication of the given numbers are: %f\n", number1 * number2);
    }
    else if (x > 4)
    {
        printf("Error input mismatch\n");
    }
    return 0;
}