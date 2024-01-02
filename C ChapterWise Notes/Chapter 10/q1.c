#include <stdio.h>

int main()
{
    FILE *ptr;
    int x[3], count = 0;
    ptr = fopen("integer.txt", "r");

    while (count < 3)
    {
        fscanf(ptr, "%d", &x[count]);
        count++;
    }
    fclose(ptr);
    printf("The numbers are %d, %d, %d respectively\n", x[0], x[1], x[2]);

    return 0;
}