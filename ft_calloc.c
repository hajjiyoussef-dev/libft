

#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
    size_t totalSize = (num * size) ;
    unsigned char  *ptr ;
    unsigned int i;

    i = 0;
    ptr = (unsigned char *) malloc(totalSize);

    if (ptr == NULL)
    {
        return (NULL);
    }
    while ( i < totalSize)
    {
        ptr[i] = 0 ;
        i++;
    } 

    return (ptr) ;
}
// #include "libft.h"

// void	*ft_calloc(size_t count, size_t size)
// {
// 	char	*ptr;
// 	size_t	i;

// 	if ((int)count < 0 || (int)size < 0)
// 		return (NULL);
// 	i = count * size;
// 	ptr = (char *)malloc(i);
// 	if (ptr == NULL)
// 		return (NULL);
// 	while (i > 0)
// 	{
// 		*ptr = 0;
// 		ptr++;
// 		i--;
// 	}
// 	return ((void *)(ptr - count * size));
// }


int main(void)
{
    int n = 5;

    int *arr ;

    arr = (int *) ft_calloc(n, sizeof(int));

    if(arr == NULL)
    {
        printf("Memory allocation failed\n");
        return (1);
    } 

    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return (0) ;
    
}
    


