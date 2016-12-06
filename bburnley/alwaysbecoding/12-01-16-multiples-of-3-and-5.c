/*#############################################################################
# Name: 03-multiples-of-3-and-5.c
# Created: 11-30-2016 20:26:26
# Edited: 12-06-2016 11:31:59
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

/* Write a program that prints the sum of all the multiples of 3 or 5 that are 
below 1000. (3 + 5 + 6 + 9 ... + 1000). */

#include <stdio.h>

int     main(void)
{
    int     n;
    int     sum;

    n = 0;
    sum = 0;
    while (++n < 1000)
    {
        if (n % 3 == 0 || n % 5 == 0)
            sum += n;
    }
    printf("%d\n", sum);
    return (0);
}
