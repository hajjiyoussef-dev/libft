

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
#include <stdio.h>
int main(void)
{
    int str = '1';
    printf("%d" , ft_islapha(str));

    return(0);
}