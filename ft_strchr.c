


#include "libft.h"

char *ft_strchr(char *str , int ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return ((char *)str) ;
        }
         str++;
    }  

    return (0) ;
}  

int main(void)
{
    char str[] = "hello youssef" ;
    char ch = 'z' ;
   

    printf("%s", ft_strchr(str, ch));
    return (0) ;
}