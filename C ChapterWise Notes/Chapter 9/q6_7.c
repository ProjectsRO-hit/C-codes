#include <stdio.h>
#include <string.h>

typedef struct complexnum
{
    int real;
    int imaginary;
} cmplx;

void dispay(cmplx x[])
{
    for (int j = 0; j < 5; j++)
    {
        printf("Complex number %d:\n", j + 1);
        printf("Real part: %d\n", x[j].real);
        printf("Imaginary part: %d\n", x[j].imaginary);
        printf("\n");
    }
}
int main()
{
    cmplx c[5];
    printf("Please input Real and imaginary part of 5 numbers\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Input Complex number %d Real part\n", i + 1);
        scanf("%d", &c[i].real);
        printf("Input Complex number %d Imaginary part\n", i + 1);
        scanf("%d", &c[i].imaginary);
    }
    dispay(c);
    return 0;
}