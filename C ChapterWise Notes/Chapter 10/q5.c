#include<stdio.h>

int main(){
    FILE *ptr, *ptr2;
    int num;
    ptr = fopen("number.txt", "r");
    if (ptr == NULL)
    {
        printf("Read Error!\n"); //To return error if the file dosen't exist
        return 1;
    }

    fscanf(ptr, "%d", &num); // to scan the number
    fclose(ptr); // to close the pointer to reset 
   
    ptr2 = fopen("number.txt", "w"); // open the fiel to overwite
    fprintf(ptr2, "%d", num*2);
    fclose(ptr2);

    return 0;
}