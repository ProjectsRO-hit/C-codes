#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int input, number, count=1;
    srand(time(0));
    number=rand()%100+1; //random number generator
    printf("***                Welcome to number Guessing Game                          ***\n");

    do{
    printf("Please input the number (1-100)\n");
    scanf("%d", &input);

    if(input>number)
    {
        printf("Please Lower the number and try again!! \n");
    }
    else if (input<number)
    {
      printf("Please increase the number and try again!! \n");  
    }
    else
    {
       printf("You found out the number in %d attempts \n", count);  
    }
    count++;
}while(input!=number);
return 0;
}