#include "libft.h"
/*
* ft_memset sets each byte in a memory block pointed to by ptr to the specified value for num iterations 
* and returns the updated pointer.
*/

void *ft_memset(void *ptr, int value, size_t num)
{
    size_t i;
    i = 0;
    char *str;
    str = ptr;
    
    while (i < num)
    {
        str[i] = value;
        i++;
    }

    return ptr;
}

int main (void)
{
    char buffer[10];
    
    ft_memset(buffer, 'A', sizeof(buffer));
    for (unsigned long i = 0; i < sizeof(buffer); i++)
    {
        printf("%c ", buffer[i]);
    }    
 }
