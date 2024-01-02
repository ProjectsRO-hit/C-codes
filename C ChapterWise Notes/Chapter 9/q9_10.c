#include <stdio.h>

typedef struct date
{
    int day;
    int month;
    int year;
} date;

int compare(date d[])
{
    date fir;
    date sec;

    fir.day = d[0].day;
    fir.month = d[0].month;
    fir.year = d[0].year;
    sec.day = d[1].day;
    sec.month = d[1].month;
    sec.year = d[1].year;

    if (fir.year > sec.year)
    {
        return 1;
    }
    if (fir.year < sec.year)
    {
        return 0;
    }
    if (fir.month > sec.month)
    {
        return 1;
    }
    if (fir.month < sec.month)
    {
        return 0;
    }

    if (fir.day > sec.day)
    {
        return 1;
    }
    if (fir.day < sec.day)
    {
        return 0;
    }
    if (fir.day == sec.day)
    {
        return 5;
    }
}

int main()
{
    date d[2];
    int i = 0;

    while (i < 2)
    {
        printf("Please input the day of user %d (e.g., 1, 2, 3, ...)\n", i + 1);
        scanf("%d", &d[i].day);
        printf("Please input the month of user %d (e.g., 1, 2, 3, ...)\n", i + 1);
        scanf("%d", &d[i].month);
        printf("Please input the year of user %d\n", i + 1);
        scanf("%d", &d[i].year);
        i++;
    }

    int x = compare(d);

    if (x == 1)
    {
        printf("The first input comes after the second input\n");
    }
    else if (x == 0)
    {
        printf("The first input comes before the second input\n");
    }
    else
    {
        printf("Both input dates are the same!!\n");
    }

    int yearDiff = d[0].year - d[1].year;
    int monthDiff = d[0].month - d[1].month;
    int dayDiff = d[0].day - d[1].day;

    if (dayDiff < 0)
    {
        monthDiff--; // Borrow one month from the month difference
        dayDiff += 30; // Assuming each month has 30 days for simplicity
    }

    if (monthDiff < 0)
    {
        yearDiff--; // Borrow one year from the year difference
        monthDiff += 12; // Adjust month difference to be positive
    }

    printf("Year Difference: %d, Month Difference: %d, Day Difference: %d\n", yearDiff, monthDiff, dayDiff);

    return 0;
}


