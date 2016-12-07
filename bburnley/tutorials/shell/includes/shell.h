#ifndef SHELL_H
# define SHELL_H

# define SH_RL_BUFSIZE 1024
# define SH_TOK_BUFSIZE 64
# define SH_TOK_DELIM " \t\r\n\a"

# include <stdio.h>
# include <unistd.h>
# include <sys/wait.h>
# include <stdlib.h>
# include <string.h>

void          sh_loop(void);
char          *sh_read_line(void);
char          **sh_split_line(char *line);
int           sh_execute(char **args);
int           sh_launch(char **args);
int           sh_cd(char **args);
int           sh_help(char **args);
int           sh_exit(char **args);
int           sh_num_builtins();

extern char    *builtin_str[];

extern int      (*builtin_func[]) (char **);

#endif
