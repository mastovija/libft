#include "libft.h"
/**
 * The ft_strtrim function effectively removes leading and trailing characters from the input string 's1'
 * based on the provided set of characters 'set', and returns the resulting trimmed string.
*/

static int is_character_in_set(char c, char const *set)
{
    int i = 0;
    
    while (set[i] != '\0') {
        if (set[i] == c)
            return 1;
        i++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t trimmed_length = 0;
    char *trimmed_str;
    
    if (!s1 || !set)
        return NULL;

    // Trim leading characters
    while (*s1 && is_character_in_set(*s1, set))
        s1++;
    
    // Calculate the length of the trimmed string
    while (s1[trimmed_length])
        trimmed_length++;
    
    // Trim trailing characters
    while (trimmed_length > 0 && is_character_in_set(s1[trimmed_length - 1], set))
        trimmed_length--;

    // Allocate memory for the trimmed string
    trimmed_str = (char *)malloc((trimmed_length + 1) * sizeof(char));
    if (!trimmed_str)
        return NULL;
    
    // Copy the trimmed string
    for (size_t i = 0; i < trimmed_length; i++)
        trimmed_str[i] = s1[i];
    
    trimmed_str[trimmed_length] = '\0';
    
    return trimmed_str;
}

int main(void)
{
    char str[] = "   Hello, world!   ";
    char set[] = " ";
    char *trimmed_str = ft_strtrim(str, set);
    printf("Original string: \"%s\"\n", str);
    printf("Trimmed string: \"%s\"\n", trimmed_str);
    free(trimmed_str);
    return 0;
}