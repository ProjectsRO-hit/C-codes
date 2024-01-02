#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    printf("Please input the number of the required multiplication table\n");
    scanf("%d", &num);
    ptr = fopen("Multiplication Table.txt", "w");
    for (int i = 0; i <= 10; i++)
    {
        fprintf(ptr, "%d * %d = %d\n", num, i, num*i);
    }
    fclose(ptr);
        return 0;
}