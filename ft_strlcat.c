#include "libft.h"
/*
* ft_strlcat concatenates the source string src to the destination string dst with a specified size limit size.
* It calculates the available space in the destination buffer and copies characters from the source string to the destination string 
* while ensuring the limit is not exceeded. It appends a null terminator if there is space available.
* The function returns the total length of the concatenated string.
* the size_t size argument specifies the size of the destination buffer and serves as a limit
* for the concatenation operation, ensuring that it does not exceed the available space and helps prevent buffer overflows.
*/

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