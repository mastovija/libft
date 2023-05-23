#include "libft.h"
/**
 * The ft_strlen function calculates the length of the string by counting the number of characters until it reaches the null terminator.
 * It assumes that the string passed as the argument s is null-terminated, meaning it ends with a null character ('\0') to indicate the end of the string.
*/

size_t ft_strlen(const char *s)
{
    size_t i;
    i = 0;
    while (s[i])
        i++;
    return i;
}

/*
int main (void)
{
    char *s = "hello";

    printf ("%zu", ft_strlen(s));
}
*/