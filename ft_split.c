#include "libft.h"
/**
 * The ft_split function takes a string 's' and a delimiter character 'c' and splits the string into an array of words.
 * It allocates memory for the array and each word, and returns the resulting array of strings. 
 * The words are determined by splitting the string at occurrences of the delimiter character 'c'. 
 * The array of strings ends with a NULL pointer to mark the end. If memory allocation fails, the function returns NULL.
*/

// Count the number of words in the string
static size_t count_words(char const *s, char c)
{
    size_t count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s == c)
            in_word = 0;
        else if (!in_word)
        {
            // Encountered a new word
            in_word = 1;
            count++;
        }
        s++;
    }

    return count;
}

// Get the length of a word until the delimiter character is encountered
static size_t get_word_length(char const *s, char c)
{
    size_t length = 0;

    while (*s && *s != c)
    {
        length++;
        s++;
    }

    return length;
}

// Split the string into an array of words using the delimiter
char **ft_split(char const *s, char c)
{
    // Count the number of words in the string
    size_t word_count = count_words(s, c);

    // Allocate memory for the result array of strings
    char **result = (char **)malloc(sizeof(char *) * (word_count + 1));

    if (!result)
        return NULL;

    size_t i = 0;
    while (*s)
    {
        if (*s != c)
        {
            // Get the length of the current word
            size_t word_length = get_word_length(s, c);

            // Allocate memory for the word and copy it
            result[i] = (char *)malloc(sizeof(char) * (word_length + 1));

            if (!result[i])
            {
                // Free previously allocated memory if allocation fails
                while (i > 0)
                    free(result[--i]);
                free(result);
                return NULL;
            }

            // Copy the word into the allocated memory
            for (size_t j = 0; j < word_length; j++)
                result[i][j] = *s++;
            result[i][word_length] = '\0';
            i++;
        }
        else
        {
            s++;
        }
    }

    // Set the last element of the array to NULL to mark the end
    result[i] = NULL;
    return result;
}

int main(void)
{
    char const *s = "Hello,World!This,is,a,test";
    char c = ',';

    // Call ft_split to split the string
    char **result = ft_split(s, c);

    if (result)
    {
        // Iterate through the array of strings and print each word
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("%s\n", result[i]);
        }

        // Free the allocated memory
        for (int i = 0; result[i] != NULL; i++)
        {
            free(result[i]);
        }
        free(result);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}