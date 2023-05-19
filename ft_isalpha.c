#include "libft.h"

int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    else
        return 0;
}

int main (void)
{
    char c = 'a';
    int i; 
    i = c;
    printf("%i", ft_isalpha(i));
    return 0;
}