#include<stdio.h> 

int main(){
    int name1[20], name2[20];
    float salary[2]; int c=0;
    FILE *ptr;
    ptr = fopen("CoorporateX.txt", "w");
    // To get name input
    printf("Please input the First Employee name\n");
    scanf("%s", name1);
    printf("Please input the Second Employee name\n");
    scanf("%s", name2);
    // To get salary input
    while(c < 2)
    {
        printf("Please input the salary of Employee %d: ", c+1);
        scanf("%f", &salary[c]);
        c++;
    }
    // Write THe given inputs to txt file
    fprintf(ptr, "Employee 1: %s, Salary: %.2f\n", name1, salary[0]);
    fprintf(ptr, "Employee 2: %s, Salary: %.2f\n", name2, salary[1]);
    //close the file
    fclose(ptr);
    return 0;
}