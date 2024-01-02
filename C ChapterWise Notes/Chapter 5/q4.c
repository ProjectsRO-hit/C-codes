#include<stdio.h>
int fibonacci(int x){
    if (x == 0){
        return 0;
    }
    else if ( x == 1 || x==2){
        return 1;
    }
    else{
        return fibonacci(x-1)+ fibonacci(x-2);
    }
}


int main(){
    int fibnumber;
    printf("Enter the fibonacci number\n");
    scanf("%d", &fibnumber);
    int x = fibonacci(fibnumber);
    printf("The value of fibonacci number %d is : %d\n", fibnumber, x);
    return 0;
}