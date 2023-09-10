#include "main.h"
/**
 * 
*/
void l_files(const char *directory_path)
{
    DIR *dir;
    struct dirent *entry;

    dir = opendir(directory_path);
    if (dir == NULL)
	{
        perror("opendir");
        return;
    }

    while ((entry = readdir(dir)) != NULL)
	{
        if (strcmp(entry->d_name, ".") != 0 && strcmp(entry->d_name, "..") != 0)
		{
            printf("%s ", entry->d_name);
        }
    }
	printf("\n");
    closedir(dir);
}