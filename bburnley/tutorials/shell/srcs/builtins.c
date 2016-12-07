/*#############################################################################
# Name: builtins.c
# Created: 12-06-2016 16:41:00
# Edited: 12-07-2016 11:07:05
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include "shell.h"

#include <stdio.h>
#include <stdlib.h>

char     *builtin_str[] = {
    "cd",
    "help",
    "exit"
};

int     (*builtin_func[]) (char **) = {
    &sh_cd,
    &sh_help,
    &sh_exit
};

int     sh_num_builtins() {
    return (sizeof(builtin_str) / sizeof(char *));
}

int     sh_cd(char **args)
{
    if (args[1] == NULL)
        fprintf(stderr, "sh: expected argument to \"cd\"\n");
    else
    {
        if (chdir(args[1]) != 0)
            perror("sh");
    }
    return (1);
}

int     sh_help(char **args)
{
    int     i;

    (void)args;
    printf("Brian Burnley's Shell\n");
    printf("Type program names and arguments, then press enter.\n");
    printf("The following commands are built in:\n");
    for (i = 0; i < sh_num_builtins(); i++)
        printf("  %s\n", builtin_str[i]);
    printf("Use the man command for information on other programs.\n");
    return (1);
}

int     sh_exit(char **args)
{
    (void)args;
    return (0);
}
