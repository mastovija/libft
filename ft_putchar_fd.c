#include "libft.h"
/**
 * The purpose of ft_putchar_fd is to provide a convenient way to write a single character to a specified file descriptor. 
 * It is typically used for low-level I/O operations when you want to write individual characters instead of strings.
 * A file descriptor is a number that represents an open file or input/output resource within a program. 
 * It's like a "reference" to an open file. Think of a file descriptor as an identifier that allows a program to interact with files, network sockets, 
 * or other input/output resources. It helps the program read from or write to the resource associated with that particular file descriptor.
 * For example, when a file is opened, the operating system assigns a file descriptor to that open file. 
 * The program can then use that file descriptor to perform operations on the file, such as reading data from it or writing data to it.
*/

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}

/*
int main()
{
    int fileDescriptor = 1; // File descriptor for standard output (stdout)

    // Write characters to the file descriptor using ft_putchar_fd
    ft_putchar_fd('H', fileDescriptor);
    ft_putchar_fd('e', fileDescriptor);
    ft_putchar_fd('l', fileDescriptor);
    ft_putchar_fd('l', fileDescriptor);
    ft_putchar_fd('o', fileDescriptor);
    ft_putchar_fd('!', fileDescriptor);
    return 0;
}
*/