#include <stdio.h> 
#include "libft.h"

int ft_toupper(int ch)
{ 
    if ( ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32 ;
        return (ch) ;
    } 

} 

int main(void)
{
   int  ch = 'a' ; 

   int upper = ft_toupper(ch) ; 

    printf("%c" , upper) ; 
    return (0) ;

}