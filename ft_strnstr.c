#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
    size_t i, j;
    i = 0;

    if (!str && !len)
        return NULL;
    if (to_find[0] == '\0')
        return (char *)str;
    while (str[i])
    {
        j = 0;
        while (str [i + j] == to_find[j] && (i + j) < len)
        {
            if (to_find[j + 1] == '\0')
                return (char *)str + i;
            j++;
        }
        i++;
    }
    return NULL;
}
#include <string.h>
int main() {
    const char* haystack = "Hello, world!";
    const char* needle = "world";
    size_t len = strlen(haystack);

    char* result = ft_strnstr(haystack, needle, len);
    if (result != NULL) {
        printf("Needle found at position %ld: %s\n", result - haystack, result);
    } else {
        printf("Needle not found.\n");
    }

    return 0;
}