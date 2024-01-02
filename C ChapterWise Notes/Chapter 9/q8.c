// #include <stdio.h>
// #include <string.h>

// typedef struct bankaccount
// {
//     char name[20];
//     int account_num;
//     char ifsc_code[20];
//     char branch_name[20];
//     float balance;
// } acc;

// void display(acc p[])
// {
//      for (int i = 0; i < 2; i++)
//     {
//         printf("Account holder name: %s\n", p[i].name);
//         printf("Account Number: %d\n", p[i].account_num);
//         printf("Account holder IFSC code: %s\n", p[i].ifsc_code);
//         printf("Account holder Branch: %s\n", p[i].branch_name);
//         printf("Account Balance: %.2f\n", p[i].balance);
//         printf("\n");
//         printf("\n");
//     }
    
// }

// int main()
// {
//     acc person[2];
//     for (int i = 0; i < 2; i++)
//     {
//         printf("Please input the Name of the individual %d: ", i + 1);
//         scanf("%s", person[i].name);
//         printf("Please input the Account number of the individual %d: ", i + 1);
//         scanf("%d", &person[i].account_num);
//         printf("Please input the IFSC of the individual %d: ", i + 1);
//         scanf("%s", person[i].ifsc_code);
//         printf("Please input the branch name of the individual %d: ", i + 1);
//         scanf("%s", person[i].branch_name);
//         printf("Please input the Accoount balance of the individual %d: ", i + 1);
//         scanf("%f", &person[i].balance);
//         printf("\n");
//     }
//     display(person);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct bankaccount
{
    char name[20];
    char account_num[20]; // Store account number as a string
    char ifsc_code[20];
    char branch_name[20];
    float balance;
} acc;

bool isNumeric(const char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
            return false;
        str++;
    }
    return true;
}

void display(acc p[])
{
    for (int i = 0; i < 2; i++)
    {
        printf("Account holder name: %s\n", p[i].name);
        printf("Account Number: %s\n", p[i].account_num); // Print account number as string
        printf("Account holder IFSC code: %s\n", p[i].ifsc_code);
        printf("Account holder Branch: %s\n", p[i].branch_name);
        printf("Account Balance: %.2f\n", p[i].balance);
        printf("\n");
        printf("\n");
    }
}

int main()
{
    acc person[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Please input the Name of the individual %d: ", i + 1);
        scanf("%s", person[i].name);

        // Read account number as a string
        printf("Please input the Account number of the individual %d: ", i + 1);
        scanf("%s", person[i].account_num);

        // Validate if account number contains only numeric characters
        if (!isNumeric(person[i].account_num))
        {
            printf("Invalid account number. Please enter a numeric value.\n");
            return 1; // Exit program with an error code
        }

        // ... similar changes for other string inputs ...

        printf("Please input the Accoount balance of the individual %d: ", i + 1);
        scanf("%f", &person[i].balance);
        printf("\n");
    }
    display(person);
    return 0;
}

