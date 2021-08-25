#include "simpleshell.h"

/**
 * read_input - stores inputs into  standard input
 * Return: string containing the input
 */
char *read_input(void)
{
	char *line = NULL;
	ssize_t signal;
	size_t bufsize = 0;
	int i;

	signal = getline(&line, &bufsize, stdin);
	if (!line)
	{
		perror("Error allocating memory for buffer");
		return (0);
	}
	if (signal == 1)
	{
		free(line);
		return (NULL);
	}
	else if (signal == EOF)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
		free(line);
		exit(0);
	}
	else
	{
		for (i = 0; line[i] == ' ' && line[i + 1] == ' '; i++)
			;
		if (!line[i] && line[i + 1] == '\n')
		{
			free(line);
			return (0);
		}
	}
	return (line);
}

/**
 * sparse_str - put string into and array of strings
 * @line: the string to be separated
 * @env: environment variable
 * Return: tokens(array of strings) on succes or EXIT_FAILURE if fails
 */
char **sparse_str(char *line, char **env)
{
	int bufsize = t_BUFSIZE, posicion = 0;
	char **tokens;
	char *token;

	if (line == NULL)
	{
		return (0);
	}
	tokens = _calloc(sizeof(char *), bufsize);
	if (!tokens)
	{
		perror("error");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, t_special_char);
	while (token != NULL)
	{
		tokens[posicion] = token;
		posicion++;
		token = strtok(NULL, t_special_char);
	}
	if (tokens[0] == NULL)
		tokens[posicion] = "\n";
	if ((_strcmp(tokens[0], "exit") == 0) && tokens[1] == NULL)
	{
		free(line);
		free(tokens);
		exit(0);
	}
	if ((_strcmp(tokens[0], "env") == 0) && tokens[1] == NULL)
		func_printenv(env);

	return (tokens);
}


/**
 * prompt - prints '$' and waits for a user's input
 */
void prompt(void)
{
	char *prompt = {"($) "};
	char *buffer = getcwd(NULL, 0);

	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, prompt, _strlen(prompt));
	}
	free(buffer);
}
