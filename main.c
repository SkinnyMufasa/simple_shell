#include "main.h"
/**
 * main - program entry point
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	char input[MAX_INPUT_SIZE];
	char cwd[MAX_INPUT_SIZE];

	while (1)
	{
		printf("$ ");
		scanf("%s", input);

		if (strcmp(input, "exit") == 0)
		{
			return (0);
		}
		else if (strcmp(input, "/bin/ls") == 0 || strcmp(input, "ls") == 0)
		{
			if (getcwd(cwd, sizeof(cwd)) != NULL)
			{
        		l_files(cwd);
    		} else
			{
    		    perror("getcwd");
    		    exit(EXIT_FAILURE);
    		}
		}
		else
		{
			if (argc == 1)
			{
				printf("%s: No such file or directory\n", argv[0]);
			}
		}
	}
	return (0);
}
