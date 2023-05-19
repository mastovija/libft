#include "libft.h"
/*
* ft_isdigit function determines whether a given character is a digit
* by checking if it falls within the range of characters representing digits from '0' to '9'.
*/

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return 1;
    else
        return 0;
}

int main (void)
{
    char c = '1';
    int i = c;

    printf("%i", ft_isdigit(i));
}