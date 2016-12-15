/*#############################################################################
# Name: 00-hello-world.c
# Created: 11-28-2016 22:48:50
# Edited: 12-06-2016 11:26:51
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

/* Make a program that prints "Hello?" if 0 args, "Hello, [str]!" if 1 str arg,
& "Hello, world!" if 2+ strs args. Then newline. */

#include <stdio.h>

int     main(int argc, char **argv)
{
    if (argc < 2)
        printf("Hello?\n");
    else if (argc == 2)
        printf("Hello, %s!\n", argv[1]);
    else
        printf("Hello, world!\n");
}
