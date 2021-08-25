# HSH - Simple Shell :shell:
A simple UNIX command interpreter written as part of the low-level programming and algorithm track at Holberton School.

## Description :speech_balloon:
[pip]hsh is a simple UNIX command language interpreter that reads commands from either a file or standard input and executes them.<br/>
## Requeriments :eye_speech_bubble:
* Allowed editors: vi, vim, emacs.<br/>
* Programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic<br/>
* All files should end with a new line<br/>
* Code should use the Betty style. it will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style\ .pl) and betty-doc.pl<br/>
* No more than 5 functions per file<br/>
* All your header files should be include guarded<br/>
* Use system calls only when you need to <br/>
* Authorized functions and system calls: <br/>
	* access (man 2 access) <br/>
	* chdir (man 2 chdir) <br/>
	* close (man 2 close) <br/>
	* closedir (man 3 closedir) <br/>
	* execve (man 2 execve)<br/>
	* exit (man 3 exit) <br/>
	* fork (man 2 fork) <br/>
	* free (man 3 free) <br/>
	* stat (__xstat)(man 2 stat) <br/>
	* lstat (__lxstat)(man 2 lstat) <br/>
	* fstat (__fxstat)(man 2 fstat```) <br/>
	* getcwd (man 3 getcwd) <br/>
	* getline (man 3 getline) <br/>
	* kill (man 2 kill) <br/>
	* malloc (man 3 malloc) <br/>
	* open (man 2 open) <br/>
	* opendir (man 3 opendir) <br/>
	* perror (man 3 perror) <br/>
	* read (man 2 read) <br/>
	* readdir (man 3 readdir) <br/>
	* signal (man 2 signal) <br/>
	* strtok (man 3 strtok) <br/>
	* wait (man 2 wait) <br/>
	* waitpid (man 2 waitpid) <br/>
	* wait3 (man 2 wait3) <br/>
	* wait4 (man 2 wait4) <br/>
	* write (man 2 write) <br/>
	* _exit (man 2 _exit) <br/>
	* isatty (man 3 isatty) <br/>
	* fflush (man 3 fflush) <br/>
## Invocation :see_no_evil: :hear_no_evil: :speak_no_evil:
# Usage:
To invoke, compile all .c files in the repository and run the resulting executable:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
./hsh
```
To exit the program,type:
($) exit

This **hsh** supports most shell commands, such as cat, pwd, ls -la and more.

## Examples :ok_hand:

### Ex 1:

```bash
> pwd
/root/simple_shell
```
### Ex 2:

```bash
> ls -l
total 72
-rw-r--r-- 1 root root  1872 Aug 25 07:04 adv_func.c
-rw-r--r-- 1 root root  1108 Aug 25 06:29 base_func.c
-rw-r--r-- 1 root root   518 Aug 25 06:39 exec.c
-rw-r--r-- 1 root root   723 Aug 25 06:40 _getline.c
-rwxr-xr-x 1 root root 22656 Aug 25 07:23 hsh
-rw-r--r-- 1 root root   820 Aug 25 07:17 main.c
-rw-r--r-- 1 root root  1136 Aug 25 06:41 more_fun2.c
-rw-r--r-- 1 root root   968 Aug 25 06:44 more_func.c
-rw-r--r-- 1 root root  1048 Aug 25 06:47 path.c
-rw-r--r-- 1 root root  2457 Aug 25 06:17 README.md
-rw-r--r-- 1 root root   176 Aug 25 06:47 signal.c
-rw-r--r-- 1 root root   936 Aug 25 07:16 simple_shell.h
-rw-r--r-- 1 root root   722 Aug 25 06:47 split.c
```

## Quick start :bicyclist:
Git clone the repository.

```bash
https://github.com/jassemb/simple_shell
```
### Authors :writing_hand:

https://github.com/jassemb<br/>
https://github.com/mouadhx04<br/>

### License
This project is licensed under the Holberton school License.



