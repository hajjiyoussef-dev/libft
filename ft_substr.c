
#include "libft.h"

int ft_strlen(const char  *str)
{
    int i ;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i) ;
    
}

char *ft_substr(char const  *s, unsigned int start, size_t len)
{
    unsigned char *substr ; 
    int i ;
    int s_len ;

    i = 0 ;
    if (!s)
        return (0);
    s_len = ft_strlen(s) ;

    if (start > s_len)
            start = s_len ;
    if(len > s_len - start)
            len = s_len - start ;
    substr = (char *) malloc((len + 1) * sizeof(char));
    if (!substr)
        return (0);
    while (i < len && start < s_len)
    {
        substr[i++] = s[start++] ;
    } 
    substr[i] = '\0';

    return (substr) ;
} 

int main(void)
{
    char const  s[]  = "hello youssef hajji" ;
    unsigned int  start = 0 ;
    int len = 100 ;

   char *result =  ft_substr(s,start,len) ; 
   printf("%s", result) ;

   return (0) ;

}