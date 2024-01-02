// using for loop
// #include <stdio.h>

// int main()
// {
//     int fac, n, i = 1;
//     printf("Please enter the number of the desired factorial number!\n ");
//     scanf("%d", &n);
//     for (fac = n; fac >= 1; fac--)
//     {
//         i=i*fac;
//     }
//     printf("The factorial of the %d is: %d", n,i);
//     return 0;
// }





// using while loop

#include <stdio.h>

int main()
{
    int fac, n, i = 1;
    printf("Please enter the number of the desired factorial number!\n ");
    scanf("%d", &n);
    fac=n;
    while (fac>=1)
    {   
        i=i*fac;
        fac--;
    }
    printf("The factorial of the %d is: %d", n,i);
    return 0;
}