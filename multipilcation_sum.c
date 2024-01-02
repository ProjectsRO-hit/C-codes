#include <stdio.h>

int main()
{
    int n, j, i, k=0;
    printf("Please input the number of the desired table\n");
    scanf("%d", &n);
    printf("****The Multiplication number of %d is*****\n", n);
    for (j = 1; j <= 10; j++)
    {
        i = n * j;
        printf("%d  *  %d = %d\n", n, j, n * j);
        k+=i;
    }
  
    printf(" The sum of the table is: %d ", k);
    return 0;
}