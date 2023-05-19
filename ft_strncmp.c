#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;
    i = 0;

    if (n == 0)
		return (0);

    while ((i < n) && (str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return (((unsigned char)str1[i] - (unsigned char)str2[i]));
		i++;
	}
	return (0);
    
}

int main (void)
{
    char *str1 = "Abcdef";
    char *str2 = "abcdef";

    printf("%i", ft_strncmp(str1, str2, 4)); 
}