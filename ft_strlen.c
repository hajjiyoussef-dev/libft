


#include "libft.h"

int  ft_strlen( const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    } 

    return (i);
    

} 

// int main(void)
// {
//     char str[] =  "hello" ;

//     printf("%d" , ft_strlen(str));

//     return (0) ;
// }