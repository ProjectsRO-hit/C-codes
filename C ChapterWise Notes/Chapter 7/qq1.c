#include<stdio.h>

int main(){
    float marks[5];
    for (int i=0; i<5; i++){
        printf("Please enter marks of Student %d:", i+1);
        scanf("%f", &marks[i]);
        printf("\n");
    }
    for (int j=0; j<5; j++){
        printf("The marks entered for Student %d is %.1f\n", j+1, marks[j]);
    }
    return 0;
}