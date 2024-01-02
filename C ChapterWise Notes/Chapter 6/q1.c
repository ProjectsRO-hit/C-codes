#include<stdio.h>

int main(){
    int a = 4;
    printf("The address of a is %u\n", &a);
    printf("The value at address of a is %d\n", *(&a));
    return 0;
}