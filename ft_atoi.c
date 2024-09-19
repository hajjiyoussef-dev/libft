#include <stdio.h>
#include "libft.h"

int ft_atoi(char *nbr)
{
    int i;
    int s;
    int res;

    i = 0;
    s = 1 ;
    res = 0;
    while (nbr[i] == 32 || (nbr[i] >= 9 && nbr[i] <= 13)) 
    {
        i++;
    } 
    while (nbr[i] == '+' || nbr[i] == '-')
    {
        if (nbr[i] == '-')
        {
            s *= -1 ;
        }
        i++;
        
    } 
    while (nbr[i] >= '0' && nbr[i] <= '9')
    {
        res = res * 10 + (nbr[i] - '0');
        i++;
    }
    
    return ((res * s));
 
} 

int main(void)
{
    char nbr[] = "  -+-+-+--23h45678d234567" ;

    printf("%d" ,ft_atoi(nbr) );
    return(0);
}