#include "libft.h"
/*
* ft_atoi function parses a string character by character, skipping leading whitespace,
* determining the sign, and accumulating the numerical value until a non-digit character is encountered.
* It then returns the corresponding integer value.
*/

int ft_atoi(const char *str)
{
    int i, result, sign;
    i = 0;
    sign = 1;
    result = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        result *= 10;
        result += str[i] - '0';
        i++;
    }
    return (result * sign);    
}
#include <string.h>
int main () {
    char * str = "12345";
    printf ("%i", ft_atoi(str));
   return(0);
}