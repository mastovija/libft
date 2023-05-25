#include "libft.h"
/**
 * The purpose of ft_putstr_fd is to provide a convenient way to write a string to a specified file descriptor. 
 * It is typically used for low-level I/O operations when you want to write a sequence of characters instead of a single character.
*/
void ft_putstr_fd(char *s, int fd)
{
    if (s == NULL)
        return;

    int i = 0;
    while (s[i] != '\0')
    {
        ft_putchar_fd(s[i], fd);
        i++;
    }
}
/*
int main()
{
    int fileDescriptor = 1; // File descriptor for standard output (stdout)

    char *message = "Hello, world!";

    // Write the message to the file descriptor using ft_putstr_fd
    ft_putstr_fd(message, fileDescriptor);

    return 0;
}
*/