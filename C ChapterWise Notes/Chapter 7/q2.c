#include<stdio.h>

int main(){
    int s[3] = {1,2,3};
    printf(" *(s+3) represents to %d", *(s+3)); // false because arr starts from 0 (position 0 refers to"1") hence gcc gave away the garbage value.
    return 0;
}
