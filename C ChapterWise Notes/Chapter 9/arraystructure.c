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
    struct employee e[5];
    e[1].empcode = 101;
    e[1].salary = 532.15;
    strcpy(e[1].name, "Pappu");

    e[2].empcode = 102;
    e[2].salary = 55542.15;
    strcpy(e[2].name, "Chingis");

    e[3].empcode = 103;
    e[3].salary = 5542.15;
    strcpy(e[3].name, "Halwa");
    return 0;
}