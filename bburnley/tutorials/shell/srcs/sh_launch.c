/*#############################################################################
# Name: sh_launch.c
# Created: 12-06-2016 17:10:56
# Edited: 12-07-2016 08:06:46
# Creator: Brian Burnley
# Editor: Brian Burnley
##############################################################################*/

#include "shell.h"

#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int     sh_launch(char **args)
{
    pid_t   pid;
    pid_t   wpid;
    int     status;

    pid = fork();
    if (pid == 0)
    {
        if (execvp(args[0], args) == -1)
            perror("sh");
        exit(EXIT_FAILURE); 
    }
    else if (pid < 0)
        perror("sh");
    else
    {
        do {
            wpid = waitpid(pid, &status, WUNTRACED);
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }
    return (1);
}
