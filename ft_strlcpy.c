
#include "libft.h"

char *ft_strlcpy(char *dest, char *str, int size)
{
    int i  = 0;

    if (size > 0)
    {

        while (str[i] != '\0' && i < size )
        {
            dest[i] = str[i];
            i++;
        }
        dest[i] = '\0' ;
        
    }
   
    
    return (dest);
} 

int main(void)
{
    char str[] = "hellohh" ;
    char dest[10] ;

    ft_strlcpy(dest, str, 8); 

    printf("%s" , dest) ;

    return (0) ;

}