#include<stdio.h>
#include<string.h>

typedef struct complexnum{
    int real;
    int imaginary;
}cmplx;

int main(){
    cmplx c;
    c.real = 10;
    c.imaginary = 5;

    printf("The complex number is -> "
            " Imaginary part: %d, Real part: %d", c.imaginary, c.real);
    return 0;
}