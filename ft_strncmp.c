#include <stdio.h> 

int ft_strncmp(char *dest, char *str, size_t n)
{
    unsigned int i = 0;

    while (str[i] != '\0' && dest[i] != '\0' && i < (n -1))
    {
        dest[i] = str[i];
        i++;
    } 
     return (dest[i] - str[i]);
    
}

int main(void)
{
    char str[] = "helloa" ;
    char dest[] = "helloa" ;

    printf("%d" , ft_strncmp(dest, str , 10));

    return (0) ;
}