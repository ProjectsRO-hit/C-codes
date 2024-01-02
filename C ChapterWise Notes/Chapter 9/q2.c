#include <stdio.h>
#include <string.h>

struct vector
{
    int x;
    int y;
};

struct vector vecsum(struct vector v1, struct vector v2){
    struct vector sum;
    sum.x =  v1.x + v2.x;
    sum.y =  v1.y + v2.y;
    return sum;
}

int main()
{
    struct vector v1, v2, sum;
    v1.x = 5;
    v1.y = 10;
    v2.x = 9;
    v2.y = 6;

    sum = vecsum(v1, v2);
    printf("The sum of X co-ordinate is: %d, Y co-ordinate is: %d\n", sum.x, sum.y);
    return 0;
}