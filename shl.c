#include "main.h"
/**
 * main - this is the main function
 *Return: 0 (successful)
 */

int main(void)
{
	char *popup = "[MimiAlvinShell]># ";
	char *linebuff;
	size_t size;

	size = 0;
	ssize_t n_chars;

	while (1)	//if the condition holds true
	{
	printf("%s", popup);
	n_chars = getline(&linebuff, &size, stdin);

	if (n_chars == -1)	//handles EOL (ctrl d).
	{
		printf("[MimiAlvinShell]># exiting...\n");
		return (-1);
	}

	printf("%s\n", linebuff);
	}

	free(linebuff);

	return (0);
}
