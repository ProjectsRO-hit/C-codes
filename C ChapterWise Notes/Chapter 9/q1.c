#include <stdio.h>
#include <string.h>

struct vector
{
    int x;
    int y;
};
int main()
{
    struct vector v1, v2;
    v1.x = 5;
    v1.y = 10;
    printf("The X co-ordinate is: %d, Y co-ordinate is: %d\n", v1.x, v1.y);
    return 0;
}