#include "simpleshell.h"
/**
 * main - Load config files, if any. Run command loop.
 * @argc: number of arguemnets.
 * @argv: number of arguemnets.
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{

	lsh_loop();

	return (EXIT_SUCCESS);
}
