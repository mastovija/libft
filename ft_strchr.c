#include "libft.h"
/*
* ft_strchr searches for a specific character c in the string str. 
* If the character is found, it returns a pointer to that character within the string. 
* If the character is not found or the end of the string is reached, it returns NULL.
*/
char *ft_strchr(const char *str, int c)
{
    while(*str != c && *str)
      str++;
    if(*str == c)
        return (char *) str;
    else 
      return NULL;
}

int main () {
   const char str[] = "hello.school.42";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("%s\n", ret);
   
   return(0);
}