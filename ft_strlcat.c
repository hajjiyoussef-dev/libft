
#include <stdio.h>

char *ft_strlcat(char *dest, char *str, int n)
{
    unsigned int i = 0 ;
    unsigned int  j = 0 ;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (str[j] != '\0' && i < n)
    {
        dest[i] = str[j] ;
        i++;
        j++;
    }

    dest[i] = '\0' ;

    return (dest) ;
} 
//lock for the differenc between the ft_strlcat and ft_strbcat ????
int main(void)
{
    char str[] = "youssef " ;
    char dest[20] = "hello " ;
     ft_strlcat(dest, str, 20);
        printf("%s", dest) ;
    
    

    return (0);
}