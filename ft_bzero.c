#include "libft.h"


void bzero(void *s, size_t n)
{
    size_t i;
    i = 0;
    char *str;
    str = s;

    while (i < n)
    {
        str[i] = 0;
        i++;
    }
    
}