#include "libft.h"
/*
* ft_bzero function sets a block of memory to zero by iterating over each byte in the memory block and assigning
* it the value 0. This function can be useful for initializing or clearing memory buffers, 
* such as when resetting sensitive data or preparing memory for subsequent use.
*/

void ft_bzero(void *s, size_t n)
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
int main(void)
{
    char str1[] = "Hello, World!";
    size_t str1_size = sizeof(str1);
    ft_bzero(str1, str1_size);
    printf("%s", str1);
   
    return 0;
}