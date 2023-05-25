#include "libft.h"
/**
 * The ft_itoa function converts an integer into a string representation.
 * It handles both positive and negative numbers. 
 * The function dynamically allocates memory for the resulting string and returns a pointer to it. 
 * If the memory allocation fails, it returns NULL. 
 * The resulting string represents the integer, with a minus sign ('-') for negative numbers.
*/
// Function to calculate the length of the resulting string
static int get_num_length(int n)
{
    int length = 0;

    // If the number is zero or negative, we add an extra digit for the sign
    if (n < 0)
        length++;

    // Count the number of digits in the number
    while (n != 0)
    {
        length++;
        n /= 10;
    }

    return length;
}

// Main function to convert an integer to a string
char *ft_itoa(int n)
{
    int length = get_num_length(n); // Calculate the length of the resulting string
    char *str = (char *)malloc((length + 1) * sizeof(char)); // Allocate memory for the string

    if (str == NULL) // Check if memory allocation failed
        return NULL;

    if (n == 0) // If the number is zero, the resulting string will be "0"
    {
        str[0] = '0';
        str[1] = '\0'; // Add the null terminator
        return str;
    }

    int is_negative = 0;

    if (n < 0) // If the number is negative, mark it and convert to positive
    {
        is_negative = 1;
        n = -n;
    }

    // Extract digits from right to left and store them in the string
    for (int i = length - 1; i >= is_negative; i--)
    {
        str[i] = '0' + (n % 10); // Convert the digit to a character and store it
        n /= 10; // Move to the next digit
    }

    if (is_negative)
        str[0] = '-'; // Add the minus sign at the beginning if the number was negative

    str[length] = '\0'; // Add the null terminator at the end of the string

    return str; // Return the resulting string
}

int main()
{
    int number = -5210;

    // Convert the integer to a string using ft_itoa
    char *str = ft_itoa(number);

    if (str != NULL)
    {
        printf("Integer: %d\n", number);
        printf("String: %s\n", str);
        free(str); // Remember to free the allocated memory
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}