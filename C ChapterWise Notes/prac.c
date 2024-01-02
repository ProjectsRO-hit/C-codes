#include<stdio.h>
      
int main(){
    int arr[] = {2, 7, 9};
    int store[3][10];
    for (int i = 0; i<3; i++){
        for (int j=0; j<10; j++){
            store[i][j] = arr[i] * (j+1);
        }
    }
    printf("The tables are listed below\n");
    for (int i = 0; i<3; i++){
        printf("\n");
        for (int j=0; j<10; j++){
            printf("%d * %d = %d\n", arr[i], j+1, store[i][j]);
        }
    }
    return 0;
}