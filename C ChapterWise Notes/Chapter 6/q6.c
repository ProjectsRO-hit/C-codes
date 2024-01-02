#include<stdio.h>
void change(int x);

int main(){
    int a = 4;
    change(a);
    printf("The value after change is %d", a);
    return 0;
}
void change(int x)
{
    int d = 10;
    x = x * d;
}
