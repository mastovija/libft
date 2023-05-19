#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;

    if (!dest || !src)
        return NULL;
    if (dest != src)
    {
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return dest; 
}

int main (void)
{
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before ft_memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, sizeof(dest) - 1);
   printf("After ft_memmove dest = %s, src = %s\n", dest, src);

   return(0);
}