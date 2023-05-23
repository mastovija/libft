#include "libft.h"
/**
 * The ft_strrchr function searches for the last occurrence of a specific character c within a given string str.
 * It returns a pointer to the last occurrence of the character in the string or NULL if the character is not found. 
*/

char *ft_strrchr(const char *str, int c)
{
    const char *last_ocurrence;
    last_ocurrence = NULL;

    while(*str)
    {
        if (*str == c)
            last_ocurrence = str;
        str++;
    }
    return (char *) last_ocurrence;
}

int main () {
   const char str[] = "hello.school.42";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("%s\n", ret);
   
   return(0);
}