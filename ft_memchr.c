#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return (((unsigned char *)str) + i);
		i++;
	}
	return (NULL);
}

int main () {
   const char str[] = "hello.school.42";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, 20);

   printf("%s\n", ret);

   return(0);
}