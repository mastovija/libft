#include "libft.h"

/**
 * The ft_strdup function provides a way to create a duplicate of a string by allocating memory for the
 * duplicate and copying the contents of the original string.
*/

char *ft_strdup(const char *string)
{
    size_t	size;
	char	*dest;

	size = ft_strlen(string);
	dest = (char *)malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	ft_memcpy(dest, string, size);
	dest[size] = '\0';
	return (dest);
}

int main() {
   char *str = "Helloworld";
   char *result;
   result = ft_strdup(str);
   printf("The string : %s", result);
   return 0;
}