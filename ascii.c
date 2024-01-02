#include <stdio.h>

int main()
{
    char a, b, c, d, e, f, g, h, i, j;
    int x;
    int trans;
    printf("Please enter your name one by one.\n");
    printf("Note: Lower case and Upper case characters have different values.  Rule: Name can't be more than 10 characters & less than 3 characters!\n");
    printf("Please define how many characters are in your name in numberic value.\n");
    scanf("%d", &x);

    if (x >= 11 || x <= 2)
    {
        printf("Error");
    }
    else if (x == 3)
    {
        printf("Kindly Input the name one by one\n");
        scanf("%c\n", &a);
        scanf("%c\n", &b);
        scanf("%c\n", &c);
        {
            trans = a + b + c;
            printf(" The ASCII value of your character is: %d \n", trans);
        }
    }
    else if (x == 4)
    {
        printf("Kindly Input the name one by one\n");
        scanf("%c\n", &a);
        scanf("%c\n", &b);
        scanf("%c\n", &c);
        scanf("%c\n", &d);
        {
            trans = a + b + c + d;
            printf(" The ASCII value of your character is: %d \n", trans);
        }
    }
    else if (x == 5)
    {
        printf("Kindly Input the name one by one\n");
        scanf("%c\n", &a);
        scanf("%c\n", &b);
        scanf("%c\n", &c);
        scanf("%c\n", &d);
        scanf("%c\n", &e);
        {
            trans = a + b + c + d + e;
            printf(" The ASCII value of your character is: %d \n", trans);
        }
    }
    else if (x == 6)
    {
        printf("Kindly Input the name one by one\n");
        scanf("%c\n", &a);
        scanf("%c\n", &b);
        scanf("%c\n", &c);
        scanf("%c\n", &d);
        scanf("%c\n", &e);
        scanf("%c\n", &f);
        {
            trans = a + b + c + d + e + f;
            printf(" The ASCII value of your character is: %d \n", trans);
        }
    }
    else if (x == 7)
    {
        printf("Kindly Input the name one by one\n");
        scanf("%c\n", &a);
        scanf("%c\n", &b);
        scanf("%c\n", &c);
        scanf("%c\n", &d);
        scanf("%c\n", &e);
        scanf("%c\n", &f);
        scanf("%c\n", &g);
        {
            trans = a + b + c + d + e + f + g;
            printf(" The ASCII value of your character is: %d \n", trans);
        }
    }
    else if (x == 8)
    {
        printf("Kindly Input the name one by one\n");
        scanf("%c\n", &a);
        scanf("%c\n", &b);
        scanf("%c\n", &c);
        scanf("%c\n", &d);
        scanf("%c\n", &e);
        scanf("%c\n", &f);
        scanf("%c\n", &g);
        scanf("%c\n", &h);
        {
            trans = a + b + c + d + e + f + g + h;
            printf(" The ASCII value of your character is: %d \n", trans);
        }
    }
    else if (x == 9)
    {
        printf("Kindly Input the name one by one\n");
        scanf("%c\n", &a);
        scanf("%c\n", &b);
        scanf("%c\n", &c);
        scanf("%c\n", &d);
        scanf("%c\n", &e);
        scanf("%c\n", &f);
        scanf("%c\n", &g);
        scanf("%c\n", &h);
        scanf("%c\n", &i);
        {
            trans = a + b + c + d + e + f + g + h + i;
            printf(" The ASCII value of your character is: %d \n", trans);
        }
    }
    else if (x == 10)
    {
        printf("Kindly Input the name one by one\n");
        scanf("%c\n", &a);
        scanf("%c\n", &b);
        scanf("%c\n", &c);
        scanf("%c\n", &d);
        scanf("%c\n", &e);
        scanf("%c\n", &f);
        scanf("%c\n", &g);
        scanf("%c\n", &h);
        scanf("%c\n", &i);
        scanf("%c\n", &j);
        {
            trans = a + b + c + d + e + f + g + h + i + j;
            printf(" The ASCII value of your character is: %d \n", trans);
        }
    }
}