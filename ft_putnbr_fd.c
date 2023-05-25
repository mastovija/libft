#include "libft.h"
/**
 * The ft_putnbr_fd function provides a way to write an integer to a specified file descriptor, 
 * taking care of handling negative numbers and recursively writing digits in the correct order.
*/

void ft_putnbr_fd(int n, int fd)
{
    long number = n;

    if (number < 0)
    {
        write(fd, "-", 1);
        number *= -1;
    }

    if (number >= 10)
    {
        ft_putnbr_fd(number / 10, fd);
        ft_putchar_fd((number % 10) + '0', fd);
    }
    else
    {
        ft_putchar_fd(number + '0', fd);
    }
}

int main()
{
    int fileDescriptor = 1; // File descriptor for standard output (stdout)

    int number = -12345;

    // Write the number to the file descriptor using ft_putnbr_fd
    ft_putnbr_fd(number, fileDescriptor);

    return 0;
}