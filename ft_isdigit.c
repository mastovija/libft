#include "libft.h"

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