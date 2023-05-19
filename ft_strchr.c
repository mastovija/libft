#include "libft.h"

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