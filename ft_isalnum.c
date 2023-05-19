#include "libft.h"
/*
* In summary, the ft_isalnum function determines whether a given character is alphanumeric
* by checking if it falls within the ranges of lowercase letters, uppercase letters, or digits.
*/
int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return 1;
    else
        return 0;
}


int main (void)
{
    char c = '1';
    int i = c;

    printf("%i", ft_isalnum(i));
}