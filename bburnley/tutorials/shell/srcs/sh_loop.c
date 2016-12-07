/*#############################################################################
# Name: sh_loop.c
# Created: 12-06-2016 15:11:55
# Edited: 12-07-2016 11:38:52
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include "shell.h"

void    sh_loop(void)
{
    char    *line;
    char    **args;
    int     status;

    do {
        printf("> ");
        line = sh_read_line();
        args = sh_split_line(line);
        status = sh_execute(args);

        free(line);
        free(args);
    } while (status);
}
