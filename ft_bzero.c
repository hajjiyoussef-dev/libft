
#include <stdio.h>
#include "libft.h"
void *ft_memset(void *str, int value, int size)
{  
    unsigned char *p = (unsigned char *)str ;
    unsigned char v = (unsigned char ) value ;
    int i;
    i = 0;
    while ( i  < size)
    {
        p[i] = v;
        i++;
    }
    
}

void ft_bzero(void *str, int size)
{
    ft_memset(str, 0 , size);
} 

int main(void)
{
    char  str[50] ;
    int size = 50;
    ft_bzero(str, size);

    int i = 0;
    while ( str[i] < size)
    {
        printf("%d", str[i]); 
        i++;
    }
    

    return (0);
}