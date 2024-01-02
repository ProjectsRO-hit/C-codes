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
    int i = 1;
    struct employee e1, e2, e3;
    printf("Please input employee code of e%d\n", i);
    scanf("%d", &e1.empcode);
    printf("Please input salary of e%d\n", i);
    scanf("%f", &e1.salary);
    printf("Please input Name of e%d\n", i);
    scanf("%s", e1.name);
    i++;
    printf("Please input employee code of e%d\n", i);
    scanf("%d", &e2.empcode);
    printf("Please input salary of e%d\n", i);
    scanf("%f", &e2.salary);
    printf("Please input Name of e%d\n", i);
    scanf("%s", e2.name);
    i++;
    printf("Please input employee code of e%d\n", i);
    scanf("%d", &e3.empcode);
    printf("Please input salary of e%d\n", i);
    scanf("%f", &e3.salary);
    printf("Please input Name of e%d\n", i);
    scanf("%s", e3.name);

    printf("E1 details : %d, %.2f, %s \n", e1.empcode, e1.salary, e1.name);
    printf("E2 details : %d, %.2f, %s \n", e2.empcode, e2.salary, e2.name);
    printf("E3 details : %d, %.2f, %s \n", e3.empcode, e3.salary, e3.name);
    return 0;
}