/*#############################################################################
# Name: sh_execute.c
# Created: 12-06-2016 18:49:40
# Edited: 12-07-2016 08:08:41
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include "shell.h"

#include <string.h>

int     sh_execute(char **args)
{
    int     i;

    if (args[0] == NULL)
        return (1);
    for (i = 0; i < sh_num_builtins(); i++)
    {
        if (strcmp(args[0], builtin_str[i]) == 0)
            return ((*builtin_func[i])(args));
    }
    return (sh_launch(args));
}
