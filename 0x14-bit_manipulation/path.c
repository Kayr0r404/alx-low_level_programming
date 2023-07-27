#include "shell.h"

/**
 * path_ls_bin - breaks strings and excute them
 * @cmd: command from the user
 * @av: argument vector
 *
 * Return: 0 on success 1 if exec function returns 1
 */
int path_ls_bin(char *cmd, char **av)
{
	int argc = 0, status = 0;
	char **argv = NULL, *token = NULL;

	argv = malloc(sizeof(char *) * SIZE);

	token = _strtok(cmd, LINE_DELIM);
	argv[0] = token;
	while (token)
	{
		argc++;
		token = _strtok(NULL, LINE_DELIM);
		argv[argc] = token;
	}
	argv[argc] = NULL;
	status = exec(argc, argv, av);
	free(argv);
	return (status);
}

/**
 * path_ls - breaks strings and excute them
 * @cmd: command from the user
 * @av: argument vector
 *
 * Return: 0 on success 1 if exec function returns 1
 */
int path_ls(char *cmd, char **av)
{
	int argc = 0, status = 0;
	char **argv2 = NULL, *token = NULL, *cmd2 = NULL;

	cmd2 = malloc(sizeof(char *) * SIZE);

	cmd2 = _strcpy(cmd2, "/bin/");
	cmd2 = _strcat(cmd2, cmd);

	argv2 = malloc(sizeof(char *) * SIZE);

	token = _strtok(cmd2, LINE_DELIM);
	argv2[0] = token;
	while (token)
	{
		argc++;
		token = _strtok(NULL, LINE_DELIM);
		argv2[argc] = token;
	}
	argv2[argc] = NULL;

	status = exec(argc, argv2, av);
	free(cmd2);
	free(argv2);
	return (status);
}

char *findCommandInPath(const char* command)
{
	char *pathCopy, *directory;
    char* path = getenv("PATH");
    if (path == NULL) {
        printf("Error: PATH environment variable not found.\n");
        return NULL;
    }

    pathCopy = _strdup(path);
    if (pathCopy == NULL) {
        printf("Error: Memory allocation failed.\n");
        return NULL;
    }

    directory = _strtok(pathCopy, ":");
    while (directory != NULL) {
        int commandLen = _strlen(directory) + _strlen(command) + 2;
        char* fullCommandPath = (char*)malloc(commandLen * sizeof(char));
        if (fullCommandPath == NULL) {
            _printf("Error: Memory allocation failed.\n");
            free(pathCopy);
            return NULL;
        }

        snprintf(fullCommandPath, commandLen, "%s/%s", directory, command);

        if (access(fullCommandPath, F_OK) == 0) {
            free(pathCopy);
            return fullCommandPath;
        }

        free(fullCommandPath);
        directory = _strtok(NULL, ":");
    }

    free(pathCopy);
    return NULL;
}
