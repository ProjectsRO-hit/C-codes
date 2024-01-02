#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp[3])
{
    int j = 0;
    printf("The employee details are as follows\n");
    while (j < 3)
    {
        printf("The employee %d name : %s\n", j + 1, emp[j].name);
        printf("The employee %d code : %d\n", j + 1, emp[j].code);
        printf("The employee %d salary : %f\n", j + 1, emp[j].salary);
        j++;
    }
}

int main()
{
    int i = 0;
    struct employee e[3];
    struct employee *ptr;
    while (i < 3)
    {
        ptr = &e[i];

        printf("Please input the name of employee %d\n", i + 1);
        scanf("%s", (*ptr).name);
        printf("\n");
        printf("Please input the employee code of employee %d\n", i + 1);
        scanf("%d", &(*ptr).code);
        printf("\n");
        printf("Please input the salary of employee %d\n", i + 1);
        scanf("%f", &(*ptr).salary);
        printf("\n");
        i++;
    }
    show(e);
    return 0;
}