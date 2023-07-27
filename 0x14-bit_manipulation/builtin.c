#include "shell.h"

/**
 * builtin - compares exit or env command
 * @cmd: command line from the user
 *
 * Return: errno if exit 1 if print env 2 on success
 */
int builtin(char *cmd)
{
	if (_strncmp(cmd, "exit", 4) == 0)
	{
		return (0);
	}
	if (_strncmp(cmd, "env", 3) == 0)
	{
		print_env();
		return (1);
	}
	return (2);
}
/**
 * print_env - prints environ
 *
 * Return: none
 */
void print_env(void)
{
	char **env = environ;
	int i = 0;
	int j = 0;

	while (env[i] != NULL)
	{
		j = 0;
		while (env[i][j] != '\0')
		{
			_printf("%s",env[i][j]);
			j++;
		}
		_printf("\n");
		i++;
	}
}

/**
 * _getenv - get enviroment viariables
 * @name: input str
 * Return: ..
 */
char *_getenv(list_t *head, const char *name)
{
	int i, j;
	char **envp = environ;

	if (!head || !environ || !name)
		return (NULL);

	for (i = 0; environ[i] != NULL; i++)
	{
		for (j = 0; name[j] != '\0' && name[j] == envp[i][j]; j++)
		{
			/*compare characters until they differ or name[j] is null terminator*/
		}
		if (name[j] == '\0' && envp[i][j] == '=')
		{
			/* Found a matching environment variable*/
			char *value_start = &envp[i][j + 1];
			size_t value_length = _strlen(value_start);

			char *value = malloc(value_length + 1);

			if (value)
			{
				_strcpy(value, value_start);
				return (value);
			}
		}
	}

	return (NULL); /* No matching environment variable found*/
}
