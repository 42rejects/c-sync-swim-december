/*#############################################################################
# Name: 02-leap-years.c
# Created: 11-30-2016 21:54:53
# Edited: 12-06-2016 11:30:18
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

/* Write a program that prints the next 25 leap years, separated by newlines. */

#include <stdio.h>

int     main(void)
{
    int     year;
    int     leaps;

    year = 2016;
    leaps = 0;
    while (++year)
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            printf("%d\n", year);
            leaps++;
        }
        if (leaps == 25)
            break;
    }
    return (0);
}
