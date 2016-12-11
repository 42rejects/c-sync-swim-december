/*#############################################################################
# Name: 12-05-16-yoda.c
# Created: 12-06-2016 10:59:31
# Edited: 12-06-2016 11:33:03
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

/* Write a program that when given a list of str arguments, reverses the order:
> ./a.out you speak c well 
> well c speak you 
*/

#include <unistd.h>

void    ftr_putchar(char c);

void    ftr_putstr(char *str);

int     main(int argc, char **argv)
{
    while (argc-- > 1)
    {
        ftr_putstr(argv[argc]);
        ftr_putchar(' ');
    }
    ftr_putchar('\n');
}

void    ftr_putchar(char c)
{
    write(1, &c, 1);
}

void    ftr_putstr(char *str)
{
    while (*str)
        ftr_putchar(*(str++));
}
