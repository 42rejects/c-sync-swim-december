/*#############################################################################
# Name: 02-anagram.c
# Created: 11-27-2016 10:31:47
# Edited: 11-28-2016 22:48:29
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include <stdio.h>

int     main(int argc, char **argv)
{
    if (argc != 3)
        putstr("Wrong number of arguments. Provide exactly two words.");
    else
        isAnagram(argv[1], argv[2]);
    return (0);
}

void    isAnagram(char *str1, char *str2)
{
    int     i;
    int     size;
    char    *alpha1;
    char    *alpha2;

    size = 0;
    while (str1[size] && str2[size])
        size++;
    if (str1[size] != '\0' || str2[size] != '\0')
    {
        putstr("not anagram");
        return ;
    }
    alpha1 = malloc(sizeof(char) * size + 1);
    alpha2 = malloc(sizeof(char) * size + 1);
}
