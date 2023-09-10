#include "main.h"
/**
 * 
*/
void l_files(char *args[])
{
    pid_t pid = fork();

    if (pid == 0)
    {
        execvp(args[0], args);
        perror("evecvp");
        exit(EXIT_FAILURE);
    } else if (pid < 0)
    {
        perror("fork");
    }
    else
    {
        wait(NULL);
    }
}
