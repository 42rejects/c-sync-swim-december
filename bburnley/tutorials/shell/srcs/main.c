/*#############################################################################
# Name: main.c
# Created: 12-06-2016 16:54:15
# Edited: 12-07-2016 11:07:29
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include "shell.h"

int     main(int argc, char **argv)
{
    sh_loop();
    (void)argc;
    (void)argv;
    return (EXIT_SUCCESS);
}
