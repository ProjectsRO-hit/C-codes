#include <stdio.h>
int func(int farr[], int x)
{
    int store = 0;
    for (int i = 0; i < x; i++)
    {
        store = store + farr[i];
    }
    printf("The reversed value of array is listed below\n");
    for (int i = 9; i >= 0; i--){
        printf("%d", farr[i]);
        printf("\n");
    }

}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    func(ptr, 10);
    return 0;
}