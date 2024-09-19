
#include "libft.h"
int ft_strlen(char *str)
{
    int i ;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    } 
    return (i);
    
}
char  *ft_strdup(char *str)
{ 
    unsigned char *ptr;
    size_t len ;
    unsigned int i;

    len = ft_strlen(str);
    i = 0 ;
    ptr = (char *) malloc((len + 1) * sizeof(char)) ;
    if (ptr == NULL)
    {
        return (NULL);
    } 

    while (i <= len)
    {
        ptr[i] = str[i] ;
        i++;
    }

    return (ptr) ;
    

}

int main(void)
{
    char str[] = "hello ypussef hajji " ;

    char *result =  ft_strdup(str);
    printf("%s\n", result); 
    return (0) ;
}