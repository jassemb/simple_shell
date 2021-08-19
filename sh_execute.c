#include "simpleshell.h"

/**
*hsh_launch - Launch the program and wait for it to terminate.
*@args: Null terminated list of arguments (including program).
*Return: Always 1 to continue execution.
*/
int lsh_launch(char **args)
{
	pid_t pid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		/**Child process*/
		if (execvp(args[0], args) == -1)
		{
			perror("lsh");
		}
		exit(EXIT_FAILURE);
	}
	else if (pid < 0)
	{
		/**Error forking*/
		perror("lsh");
	}
	else
	{
		/**Parent process*/
		do {
			waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}

/**
*hsh_execute - Run the parsed command.
*@args: Null terminated list of arguments.
*Return: 1 (if continue running),otherwise 0 (if terminated).
*/
int lsh_execute(char **args)
{
	int i;

	if (args[0] == NULL)
	{
		/** An empty command was entered*/
		return (1);
	}
	for (i = 0; i < lsh_num_builtins(); i++)
	{
		if (strcmp(args[0], builtin_str[i]) == 0)
		{
			return ((*builtin_func[i])(args));
		}
	}
	return (lsh_launch(args));
}
