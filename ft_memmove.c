
#include <stdio.h>
#include "libft.h"

void *ft_memmove(void *dest, void *str , int size)
{
    unsigned char  *p1 = (unsigned char *) dest;
    unsigned char *p2 = (unsigned char *) str; 
    int i = 0; 
    int  j ;
    
    if (p1 > p2 && p1 < p2 + size)
    {
        while ( j < (size -1))
        {
            p1[i] = p2[i];
            j--;
         }
    }else
    {
        while ( i < size)
    {
        p1[i] = p2[i];
        i++;
    }
    }
    
    

    

    return (dest);
    
} 


int main(void)
{
    char str[] = "hello youssef" ;
    char dest[50]; 
    int size = 13 ;

    ft_memmove(dest, str, size);

    int i = 0 ;

    while (i  < size)
    {
         printf("%c", dest[i]);
        i++;
    }

}