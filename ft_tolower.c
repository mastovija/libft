#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c += 32;
    }
    return c;
}

int main (void)
{
    int i = 0;
    char c;
    char str[] = "HELLO";
   
    while(str[i])
    {
        printf("%c", ft_tolower(str[i]));
        i++;
    }
   
   return(0);
}
