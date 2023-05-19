#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    i = 0;

    if (size != 0)
    {
        while (src[i] != '\0' && i < (size - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (ft_strlen(src));
}

int main(void)
{
    char dest[10];
    const char *src = "Hello, world!";
    size_t copied = ft_strlcpy(dest, src, sizeof(dest));

    printf("Copied: %zu\n", copied);
    printf("Destination: %s\n", dest);

    return 0;
}