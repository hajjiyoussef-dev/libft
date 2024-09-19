#include <stdio.h>
#include "libft.h"
char *ft_strrchr(const char *str, int ch)
{
    const char *last_ch = 0 ;

    while (*str != '\0')
    {
        if (*str == ch)
        {
           last_ch = str ;
        }
        str++;
        
    } 

    if (*str == ch)
    {
        last_ch = str ;
    }
  
    return   (char *)last_ch ;
    
} 

int main(void)
{
    char str[] = "hello youssef ypussef" ;
    char ch = 'z' ;
   

    printf("%s", ft_strrchr(str, ch));
    return (0) ;
}