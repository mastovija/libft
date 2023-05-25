#include "libft.h"
/**
 * The ft_strmapi function takes a string s and applies a given function f to each character of the string along with its corresponding index. 
 * It then creates a new string that contains the transformed characters.
 * The purpose of ft_strmapi is to allow you to apply a custom transformation to each character of a string, 
 * while also providing the index information to the transformation function. This can be useful for performing various operations on strings, 
 * such as modifying characters based on their positions or extracting specific information from the string.
*/

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    unsigned int length;
    char *res;

    if (s == NULL)
        return NULL;

    // Calculate the length of the input string
    length = ft_strlen(s);

    // Allocate memory for the resulting string
    res = (char *)malloc((length + 1) * sizeof(char));
    if (res == NULL)
        return NULL;

    i = 0;
    while (i < length)
    {
        // Apply the transformation function to each character with its corresponding index
        res[i] = f(i, s[i]);
        i++;
    }

    // Add the null terminator at the end of the resulting string
    res[i] = '\0';

    return res;
}

// Transformation function that increments the character by its index
char transform(unsigned int index, char c)
{
    return c + index;
}

int main()
{
    char input[] = "Hello, World!";
    
    // Apply the transformation function to each character of the input string
    char *result = ft_strmapi(input, transform);
    
    if (result != NULL)
    {
        printf("Original string: %s\n", input);
        printf("Transformed string: %s\n", result);
        
        // Remember to free the allocated memory
        free(result);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}