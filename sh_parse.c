#include "simpleshell.h"

/**
*lsh_split_line - Split a line into tokens.
*@line: The input line.
*Return: Null terminated array of tokens.
*/
char **lsh_split_line(char *line)
{
	int bufsize = t_RL_BUFSIZE, position = 0;
	char **tokens = malloc(bufsize * sizeof(char *));
	char *token, **tokens_backup;

	if (!tokens)
	{
		fprintf(stderr, "lsh: allocation error\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, t_special_char);
	while (token != NULL)
	{
		tokens[position] = token;
		position++;
		if (position >= bufsize)
		{
			bufsize += t_RL_BUFSIZE;
			tokens_backup = tokens;
			tokens = realloc(tokens, bufsize * sizeof(char *));
			if (!tokens)
			{
				free(tokens_backup);
				fprintf(stderr, "lsh: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, t_special_char);
	}
	tokens[position] = NULL;
	return (tokens);
}
