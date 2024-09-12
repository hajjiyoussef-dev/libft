#include <stdio.h>

char	*ft_strnstr(char *str, char *to_find , size_t len)
{
	int	i;
	int	j;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while ( (i + j) < len && str[i + j] != '\0' && (str[i + j] == to_find[j]))
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
} 

int main(void) {
    char str[] = "hello world hello youssef hajji";
    char to_find[] = "youssef";

    
    char *result = ft_strnstr(str, to_find, 100);

    if (result != NULL) {
        printf("Found: %s\n", result);
    } else {
        printf("Not found\n");
    }

    return 0;
}