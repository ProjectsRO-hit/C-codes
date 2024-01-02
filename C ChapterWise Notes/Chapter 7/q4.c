// #include <stdio.h>

// int main()
// {
//     int input;
//     printf("Please input the number of the required multiplication table : ");
//     scanf("%d", &input);
//     int arr[10];
//     for (int i = 0; i < 10; i++)
//     {
//         arr[i] = (i + 1) * input;
//     }
//     printf("The table of %d is listed below\n", input);
//     for (int i = 0; i < 10; i++)
//     {
//         printf(" %d * %d = %d\n", input, i + 1, arr[i]);
//     }
//     return 0;
// }
#include<stdio.h>

int main(){
    int num; // to store a number 
    int arr[10];
    int i=0, j=0; // multiplier;
    printf("Please input the number of the required multiplication table\n");
    scanf("%d", &num);
    while(i<10){
        arr[i] = num * (i+1);
        i++;
    }
    while(j<10){
        printf(" %d * %d = %d\n", num, j+1, arr[j]);
        j++;
    }
    return 0;
}