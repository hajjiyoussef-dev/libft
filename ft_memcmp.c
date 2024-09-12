#include <stdio.h> 

int ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
    unsigned char *p1  = (unsigned char *) ptr1 ;
    unsigned char  *p2 = (unsigned char *) ptr2 ;
    int i ;

    i = 0 ;
    while (i < num)
    {
        if (p1[i] != p2[i] )
        {
            return (p1[i] - p2[i]);
        }
        i++;
        
    }
    return (0) ;
} 

int main(void)
{
    char ptr1[] = "abcded" ;
    char ptr2[] = "abcsed" ;

    printf("%d",ft_memcmp(ptr1, ptr2, 10)) ; 
    return (0) ;

}