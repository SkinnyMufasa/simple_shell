#include "main.h"
/**
 * 
*/
int main(int ac, char **argv)
{
    char *sgn = "$ ";
    char *l_ptr;
    size_t n = 0;

    (void)ac;
    (void)argv;
    
    printf("%s", sgn);
    getline(&l_ptr, &n, stdin);
    printf("%s\n", l_ptr);
    free(l_ptr);
    
    return(0);
}