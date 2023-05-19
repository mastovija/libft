#include "libft.h"

void *ft_memcpy(void *dest, const void * src, size_t n)
{
    size_t i;
    i = 0;

    if (!dest & !src)
        return NULL;
    if (dest != src)
    {
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *) src)[i];
            i++;   
        }
    }
    return dest;
}

int main () {
   const char src[50] = "hello";
   char dest[50];
   ft_memcpy(dest, src, 6);
   printf("After ft_memcpy dest = %s\n", dest);
   return(0);
}
