#include <stdio.h>
#include <string.h>

struct employee
{
    int empcode;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    (*ptr).empcode = 101;
    (*ptr).salary = 532.15;
    strcpy((*ptr).name, "Pappu");

    printf("%d", e1.empcode);
    return 0;
}