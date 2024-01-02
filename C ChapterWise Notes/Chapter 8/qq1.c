#include <stdio.h>

int main()
{
    char *str = "RohitBhoi";
    char store[50];
    int k = 0;
    while (*str != '\0')
    {
        store[k] = *str;
        k++;
        str++;
    }

    for (int i = 0; i < k; i++)
    {
        printf("%c", store[i]);
    }
    return 0;
}
