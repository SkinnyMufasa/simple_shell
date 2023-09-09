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
	char *args[] = { "hello", NULL};

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
			args[0] = input;
			execvp(args[0], args);
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
