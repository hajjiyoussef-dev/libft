
#include <stdlib.h> 

#include <stdio.h>

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

int main(void)
{
    char str[50];

    ft_memset(str, 'A' , sizeof(str));
    int i ;
    i = 0;
    while ( i < sizeof(str))
    {
        printf("%c" , str[i]);
        i++;   
    }
    
}