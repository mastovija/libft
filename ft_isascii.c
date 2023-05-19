#include "libft.h"
/*
* ft_isascii function determines whether a given character is within the ASCII range 
* by checking if it falls within the range of 0 to 127.
*/

int ft_isascii (int c)
{
    if (c >= 0 && c <= 127)
        return 1;
    else
        return 0;
}

int main (void)
{
    char c = '+';
    int i = c;
    printf("%i", ft_isascii(i));
}