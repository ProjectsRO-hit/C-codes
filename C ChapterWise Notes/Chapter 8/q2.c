#include <stdio.h>

int main()
{
    char st1[40];
    char st2[40];
    char c;
    int i = 0;

    printf("Please input the string\n");
    scanf("%s", st1);
    printf("Please enter the character one by one\n");
    
    while (c != '\n')
    {
        fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i] = '\0';

    printf("The value of st1 is : %s\n", st1);
    printf("The value of st2 is : %s\n", st2);

    return 0;
}