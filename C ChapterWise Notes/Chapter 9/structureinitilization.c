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
    struct employee harry = {100, 345.25, "Rohit"};
    printf("Employee code is : %d\n", harry.empcode);
    printf("Salary is : %.2f\n", harry.salary);
    printf("Name is : %s\n", harry.name);

    return 0;
}