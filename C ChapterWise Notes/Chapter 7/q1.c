#include <stdio.h>

int main()
{
    int arr[] = {2, 5, 86, 745, 78, 265, 241, 365, 45, 7};
    int *ptr = arr;
    printf("The pointer initially points at %d\n", *ptr);
    printf("The pointer initially points at %u\n", ptr);
    ptr += 2;
    printf("The pointer after increment points at %d\n", *ptr);
    printf("The pointer after increment points at %u\n", ptr);
    return 0;
}