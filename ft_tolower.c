#include <stdio.h>

int ft_tolower(int ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch += 32 ;
        return (ch);
    }
    
} 

int main(void)
{
    int ch = 'A' ; 

    int tolower = ft_tolower(ch) ;

    printf("%c" , tolower) ;

    return (0) ;

}