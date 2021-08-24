# HSH - Simple Shell :shell:
A simple UNIX command interpreter written as part of the low-level programming and algorithm track at Holberton School.

## Description :speech_balloon:
[pip]hsh is a simple UNIX command language interpreter that reads commands from either a file or standard input and executes them.
##Requeriments :eye_speech_bubble:
*Allowed editors: vi, vim, emacs.
*Programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
*All files should end with a new line
*Code should use the Betty style. it will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style\ .pl) and betty-doc.pl
*No more than 5 functions per file
*All your header files should be include guarded
*Use system calls only when you need to
*Authorized functions and system calls:
	*access (man 2 access)
	*chdir (man 2 chdir)
	*close (man 2 close)
	*closedir (man 3 closedir)
	*execve (man 2 execve)
	*exit (man 3 exit)
	*fork (man 2 fork)
	*free (man 3 free)
	*stat (__xstat)(man 2 stat)
	*lstat (__lxstat)(man 2 lstat)
	*fstat (__fxstat)(man 2 fstat```)
	*getcwd (man 3 getcwd)
	*getline (man 3 getline)
	*kill (man 2 kill)
	*malloc (man 3 malloc)
	*open (man 2 open)
	*opendir (man 3 opendir)
	*perror (man 3 perror)
	*read (man 2 read)
	*readdir (man 3 readdir)
	*signal (man 2 signal)
	*strtok (man 3 strtok)
	*wait (man 2 wait)
	*waitpid (man 2 waitpid)
	*wait3 (man 2 wait3)
	*wait4 (man 2 wait4)
	*write (man 2 write)
	*_exit (man 2 _exit)
	*isatty (man 3 isatty)
	*fflush (man 3 fflush)
## Invocation :see_no_evil: :hear_no_evil: :speak_no_evil:
#Usage:
To invoke, compile all .c files in the repository and run the resulting executable:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
./hsh
```
To exit the program,type:
($) exit

This **hsh** supports most shell commands, such as cat, pwd, ls -la and more.
##Quick start :bicyclist:
Git clone the repository:
```bash
https://github.com/jassemb/simple_shell
```
###Authors :writing_hand:




