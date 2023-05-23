#include "libft.h"
/**
 * The ft_substr function provides a way to extract a substring from a given string
 * by allocating memory for the substring and copying the relevant portion of the original string into it.
*/

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
	size_t str_length;
	size_t substr_length;

	if (!s)
		return (NULL);

	str_length = ft_strlen(s);
	substr_length = 0;

	if (start < str_length)
		substr_length = str_length - start;

	if (substr_length > len)
		substr_length = len;

	substr = (char *)malloc(sizeof(char) * (substr_length + 1));

	if (!substr)
		return (NULL);

	ft_strlcpy(substr, s + start, substr_length + 1);

	return (substr);
}

int main(void)
{
    char *original = "Hello, World!";
    char *substring = ft_substr(original, 7, 5);
    printf("Original: %s\n", original);
    printf("Substring: %s\n", substring);
    free(substring);
    return 0;
}