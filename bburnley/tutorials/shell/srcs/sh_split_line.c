/*#############################################################################
# Name: sh_split_line.c
# Created: 12-06-2016 16:58:16
# Edited: 12-07-2016 08:10:56
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include "shell.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    **sh_split_line(char *line)
{
    int     bufsize;
    int     position;
    char    **tokens;
    char    *token;

    bufsize = SH_TOK_BUFSIZE;
    tokens = (char**)malloc(sizeof(char*) * bufsize);
    if (!tokens)
    {
        fprintf(stderr, "sh: allocation error\n");
        exit(EXIT_FAILURE);
    }

    token = strtok(line, SH_TOK_DELIM);
    position = 0;
    while (token != NULL)
    {
        tokens[position] = token;
        position++;

        if (position >= bufsize)
        {
            bufsize += SH_TOK_BUFSIZE;
            tokens = realloc(tokens, bufsize * sizeof(char*));
            if (!tokens)
            {
                fprintf(stderr, "sh: allocation error\n");
                exit(EXIT_FAILURE);
            }
        }

        token = strtok(NULL, SH_TOK_DELIM);
    }
    tokens[position] = NULL;
    return tokens;
}
