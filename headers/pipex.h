#ifndef PIPEX_H
#define PIPEX_H

#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct  s_data {
    int file_in;
    int file_out;
    int pipefd[2];
    pid_t   pid;
}               t_data;

void    ft_perror(const char *s);
void    exec_cmd(char *cmd, char **envp);

#endif