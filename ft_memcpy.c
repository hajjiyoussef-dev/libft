

#include <stdio.h>
void *ft_memcpy(void *dest, void *str, unsigned int size)
{
    unsigned char *p1 = (unsigned char *) dest ;
    unsigned char *p2 = (unsigned char *) str;
    int i;
    int j;
    i = 0; 

    if (p1 > p2 && p1 < (p2 + size) )
    {
       while ( j < (size - 1))
        {
            p1[i] = p2[i];
            j--;
        }
    }else 
    {
        while ( i <= size)
        {
            p1[i] = p2[i];
            i++;
        }
    }
    
    
    
    return (dest) ;
} 


int main(void)
{
    char str[] = "hello,world!!!!!" ;
    char dest[50] ;  

    ft_memcpy(dest, str, 16);

    printf("%s" , dest);

    return (0);

}