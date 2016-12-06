/*#############################################################################
# Name: 04-even-fibonacci.c
# Created: 11-30-2016 20:39:29
# Edited: 12-06-2016 11:40:04
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

/* Write a program that prints the sum of all the even-valued Fibonacci terms 
whose values do not exceed 4 million. */

#include <stdio.h>

int     main(void)
{
    int     first;
    int     second;
    int     new;
    int     sum;

    first = 1;
    second = 2;
    sum = 2;
    while (sum)
    {
        if (first > 4000000 || second > 4000000)
        {
            printf("%d\n", sum);
            return (0);
        }
        else
        {
            new = first + second;
            if (new % 2 == 0)
                sum += new;
            (first < second) ? (first = new) : (second = new);
        }
    }
}
