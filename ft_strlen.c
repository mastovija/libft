#include "libft.h"

size_t ft_strlen(const char *s)
{
    int i;
    i = 0;
    while (s[i])
        i++;
    return i;
}

/* int main (void)
{
    char *s = "hello";

    printf ("%zu", ft_strlen(s));
} */