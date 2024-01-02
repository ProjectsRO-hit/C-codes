// #include<stdio.h>

// int main() {
//     FILE *ptr, *ptr2;
//     int ch;

//     // Open the source file for reading
//     ptr = fopen("input.txt", "r");
//     if (ptr == NULL) {
//         printf("Error opening the file.\n");
//         return 1;
//     }

//     // Open the destination file for writing
//     ptr2 = fopen("output.txt", "w");

//     // Read characters from source file and write them to destination file twice
//     while ((ch = fgetc(ptr)) != EOF) {
//         fputc(ch, ptr2); // Write character once
//         fputc(ch, ptr2); // Write character twice
//     }

//     // Close the file pointers
//     fclose(ptr);
//     fclose(ptr2);

//     printf("File content copied twice successfully.\n");

//     return 0;
// }
#include <stdio.h>

int main() {
    FILE *ptr1, *ptr2;

    ptr1 = fopen("input.txt", "r");
    ptr2 = fopen("output.txt", "w");

    if (ptr1 == NULL || ptr2 == NULL) {
        printf("Error opening files\n");
        return 1;
    }

    char c = fgetc(ptr1);
    while (c != EOF) {
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }

    // Rewind the file pointer back to the beginning of the file
    fseek(ptr1, 0, SEEK_SET);
    
    // Reset c to the first character of the file
    c = fgetc(ptr1);

    while (c != EOF) {
        fputc(c, ptr2);
        c = fgetc(ptr1);
    }

    fclose(ptr1);
    fclose(ptr2);
    return 0;
}
