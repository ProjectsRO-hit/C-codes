// #include <stdio.h>
// #include <time.h>

// int main() {
//     // Get the current time
//     time_t current_time;
//     time(&current_time);

//     // Print the current time as a string
//     printf("Current time: %s", ctime(&current_time));

//     // Use strftime to format the time
//     char formatted_time[50];
//     struct tm *local_time = localtime(&current_time);
//     strftime(formatted_time, sizeof(formatted_time), "%Y-%m-%d %H:%M:%S", local_time);

//     // Print the formatted time
//     printf("Formatted time: %s\n", formatted_time);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE *file;

    // Infinite loop to continuously update the file with current time
    while (1) {
        // Get the current time
        time_t current_time;
        time(&current_time);

        // Use strftime to format the time
        char formatted_time[50];
        struct tm *local_time = localtime(&current_time);
        strftime(formatted_time, sizeof(formatted_time), "%Y-%m-%d %H:%M:%S", local_time);

        // Open the file in write mode, this will create the file if it does not exist
        file = fopen("output.txt", "w");

        if (file != NULL) {
            // Write the formatted time to the file
            fprintf(file, "%s\n", formatted_time);

            // Close the file
            fclose(file);

            // Print a message to indicate that the time has been written to the file
            printf("Current time has been written to the file.\n");
        } else {
            // Handle file opening error
            printf("Error opening the file.\n");
        }

        // Delay for a short interval (1 second) before updating the file again
        // This prevents the loop from running too fast and consuming too much CPU
        // For Windows, you can use Sleep(1000);
        // For Unix-based systems, you can use sleep(1);
        sleep(1000);
    }

    return 0;
}
