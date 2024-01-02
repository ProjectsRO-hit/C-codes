#include<stdio.h>

int main(){
    int number;
    int * point;
    printf("Please enter a number\n");
    scanf("%d", &number);
    point = &number;

    printf("The value is %d \n", number);
    printf("The value is %d \n", *(&number));
    printf("The value is %d \n", *point);
    printf("The address is %d \n", &number);
    printf("The address is %d \n", point);
    printf("The address of pointer is %d \n", &point);
    return 0;
}