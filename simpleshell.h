#ifndef _SIMPLESHELL_H_
#define _SIMPLESHELL_H_
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <fcntl.h>
#define t_BUFSIZE 64
#define t_special_char " \t\r\n\a"
#define t_RL_BUFSIZE 1024

int main(int argc, char **argv);
void lsh_loop(void);
char *lsh_read_line(void);
char **lsh_split_line(char *line);
int lsh_launch(char **args);
int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);
int lsh_num_builtins();
int lsh_exit(char **args);
int lsh_execute(char **args);

#endif
