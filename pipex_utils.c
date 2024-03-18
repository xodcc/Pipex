#include "headers/pipex.h"

void    ft_perror(const char *s)
{
    perror(s);
    exit(EXIT_FAILURE);
}

void    exec_cmd(char *cmd, char **envp)
{
    char *argv[3];

    argv[0] = "/bin/sh";
    argv[1] = "-c";
    argv[2] = cmd;
    argv[3] = NULL;

    if (execve("/bin/sh", argv, envp) == -1)
        ft_perror("execve");
}
