#include "shell.h"

/**
 * main - Simple unix shell
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	char *cmd = NULL;
	int status = 0;
	size_t n = 0;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			_printf("$");
		if (_getline(&cmd, &n, STDIN_FILENO) == -1)
			free(cmd), exit(status);
		remove_space(cmd);
		if (_strlen(_strdup(cmd)) == 0)
			continue;

		if (builtin(cmd) == 1)
			continue;

		else if (builtin(cmd) == 0)
			free(cmd), exit(status);
		if (ac > 0 && _strncmp(cmd, "/bin/", 5) == 0)
		{
			status = path_ls_bin(cmd, av);
			if (status > 0)
			{
				if (_strncmp(cmd, "/bin/ls", 7) == 0)
					status = 2;
				else
					status = 127;
			}
		}
		else if (ac > 0 && _strncmp(cmd, "/bin/", 5) != 0)
		{
			status = path_ls(cmd, av);
			if (status > 0)
				status = 127;
		}
	}
	return (0);
}
