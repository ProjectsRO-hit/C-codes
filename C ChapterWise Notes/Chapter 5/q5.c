#include<stdio.h>
int calc(int x){
    for(int i = 0; i<=10; i++){
         x = x + i;
    }
    return x;
   }

int main(){
    int x=0;
    int sum  = calc(x);
    printf("The total sum of first ten natural numbers is : %d", sum);
    return 0;
}