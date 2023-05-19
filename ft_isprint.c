#include "libft.h"
/*
* ft_isprint function determines whether a given character is a printable ASCII character
* by checking if it falls within the range of ASCII characters from ' ' (space) to ~ (tilde).
*/

int ft_isprint (int c)
{
    if (c >= 32 && c <= 126)
        return 1;
    else
        return 0;
}

int main (void)
 {
    char c = '\n';
    int i = c;

    printf("%i", ft_isprint(i));
 }