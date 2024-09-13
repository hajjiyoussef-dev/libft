#include <stdio.h>
#include <stdlib.h>

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
    


