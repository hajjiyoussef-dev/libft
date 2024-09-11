


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
#include <stdio.h>
int main(void)
{
    int c = 'a';

    printf("%d", ft_isdigit(c));

    return (0);
}