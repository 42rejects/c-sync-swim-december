/*#############################################################################
# Name: sh_read_line.c
# Created: 12-06-2016 16:56:30
# Edited: 12-07-2016 08:10:30
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include "shell.h"

#include <stdio.h>
#include <stdlib.h>

char    *sh_read_line(void)
{
    int     bufsize;
    int     position;
    char    *buffer;
    int     c;


    bufsize = SH_RL_BUFSIZE;
    buffer = (char*)malloc(sizeof(char) * bufsize);
    if (!buffer)
    {
        fprintf(stderr, "sh: allocation error\n");
        exit(EXIT_FAILURE);
    }

    position = 0;
    while (1)
    {
        if ((c = getchar()) == EOF || c == '\n')
        {
            buffer[position] = '\0';
            return (buffer);
        }
        else
            buffer[position] = c;
        position++;

        if (position >= bufsize)
        {
            bufsize += SH_RL_BUFSIZE;
            buffer = realloc(buffer, bufsize);
            if (!buffer)
            {
                fprintf(stderr, "sh: allocation error\n");
                exit(EXIT_FAILURE);
            }
        }
    }
}
