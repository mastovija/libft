#include "libft.h"
/**
 * The ft_toupper function provides a way to convert lowercase characters to uppercase characters.
*/

int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        c -= 32;
    }
    return c;
}

int main (void)
{
    int i = 0;
    char c;
    char str[] = "hello";
   
    while(str[i])
    {
        printf("%c", ft_toupper(str[i]));
        i++;
    }
   
   return(0);
}
