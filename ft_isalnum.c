

int ft_islapha(int c)
{
    
    while (c != '\0')
    {
        if (c >= 'a' && c <= 'z' || (c >= 'A' && c <= 'Z'))
            return (1);
        else
            return(0);
    }
    
}
int ft_isdigit(int c)
{
    while (c != '\0')
    {
        if (c >= '0' && c <= '9')
            return (1);
        else
            return (0);
    }
}
int ft_isalnum(int c)
{
    while (c != '\0')
    {
        if (ft_islapha(c) || ft_isdigit(c))
            return (1);
        else
            return (0);
    }
    
} 
#include <stdio.h>
int main(void)
{
    int c = 's';

    printf("%d" , ft_isalnum(c));

    return (0);
}