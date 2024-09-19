#include "libft.h"

int ft_strlen(char const *str)
{
    int i = 0 ;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i) ;  
}

char *ft_strjoin(char const *s1, char const *s2)
{ 
    size_t s1_len , s2_len , toto_len ;
    unsigned char *result ;
    int i , j ;

    if (!s1 || !s2)
        return (NULL) ;

    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    toto_len = s1_len + s2_len;

    result = (char *) malloc((toto_len + 1) * sizeof(char)) ; 

    if (!result)
    {
        return (NULL);
    }
    i = 0 ;
    while ( i < s1_len)
    {
        result[i] = s1[i] ;
        i++;
    } 
        j =  0 ;
    while (j < s2_len)
    {
        result[i + j]  = s2[j] ;
        j++;
    } 

    result[toto_len] = '\0' ;

    return (result) ;
}
    
int main(void)
{
    const char s1[] = "hello " ;
    const char s2[] = "youssef" ;
    char  *result = ft_strjoin(s1, s2) ;

    printf("%s" , result) ;

    return (0) ;
}   

