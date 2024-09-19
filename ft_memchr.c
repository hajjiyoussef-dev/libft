
#include <stdio.h> 

#include "libft.h"

void *ft_memchr(const char *str, int c, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (str[i] == (char)c)
        {
            return (char *)(str + i);
        }
        i++;
    }
    return (0);
}

int main(void)
{
    char str[] = "hello youssef hajji";
    char c = 'y';
    printf("%s", ft_memchr(str, c, 10));

    return (0);
}