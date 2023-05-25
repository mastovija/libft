#include "libft.h"
/**
 * The purpose of ft_putendl_fd is to provide a convenient way to write a string followed by a newline character to a specified file descriptor. 
 * It is typically used for low-level I/O operations when you want to write a complete line of text.
*/
void ft_putendl_fd(char *s, int fd)
{
    if (s == NULL)
        return;

    ft_putstr_fd(s, fd);
    write(fd, "\n", 1);
}

int main()
{
    int fileDescriptor = 1; // File descriptor for standard output (stdout)

    char *message = "Hello, world!";

    // Write the message followed by a newline character to the file descriptor using ft_putendl_fd
    ft_putendl_fd(message, fileDescriptor);

    return 0;
}