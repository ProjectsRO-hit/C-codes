#include<stdio.h>
#include<stdlib.h>

int main(){
    int storage;
    int *ptr;
    printf("Please input how much numbers you want to store\n");
    scanf("%d", &storage);
    ptr = (int *)calloc(storage, sizeof(int));
    for (int i = 0; i<storage; i++)
    {
        printf("Please input number %d: ", i+1);
        scanf("%d", &ptr[i]);
    }
    for (int j = 0; j<storage; j++)
    {
        printf("Number %d: %d\n", j+1, ptr[j]);
    }
    free(ptr);
    return 0;
}