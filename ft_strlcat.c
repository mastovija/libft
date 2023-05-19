#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dest_len, src_len, available, i;

    dest_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    i = 0;

    if (size > dest_len)
        available = size - dest_len - 1;
    else
        available = 0;
    while (src[i] && i < available)
    {
        dst[dest_len + i] = src[i];
        i++;
    }
    if (size > 0 && dest_len < size)
    {
        dst[dest_len + i] = '\0';
    }
    return dest_len + src_len;
}

int main(void)
{
    char dest[20] = "Hello";
    const char *src = "World!";
    size_t result = ft_strlcat(dest, src, sizeof(dest));

    printf("Concatenated string: %s\n", dest);
    printf("Total length: %zu\n", result);

    return 0;
}