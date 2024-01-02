#include<stdio.h>
void function (int x);

int main(){
    int i = 10;
    printf("The address of i is %u\n", &i);
    function(i);
    return 0;
}

void function (int x)
{
    printf("The address of i is %u\n", &x); // address is not same because i has sent a copy of its address
}