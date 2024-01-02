#include<stdio.h>

int main(){
    int variable = 10;
    int *find = &variable;
    printf("Adress of the variable is %d \n", &variable);
    printf("Adress of the variable is %d \n", find);
    printf("The value of variable using address is %d \n", *find);
    return 0;
}