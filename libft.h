#ifndef LIBFT_h
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
int ft_atoi(char *nbr) ;
int ft_isalnum(int c);
int ft_islapha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
int  ft_strlen(char *str);
int ft_strncmp(char *dest, char *str, size_t n);
int ft_tolower(int ch);
int ft_toupper(int ch);
void *ft_memchr(const char *str, int c, size_t n);
void *ft_memcpy(void *dest, void *str, unsigned int size);
void *ft_memmove(void *dest, void *str , int size);
void *ft_memset(void *str, int value, int size);
void ft_bzero(void *str, int size) ;
void *ft_calloc(size_t num, size_t size) ;
char *ft_strchr(char *str , int ch) ;
char  *ft_strdup(char *str) ;
char *ft_strlcat(char *dest, char *str, int n);
char *ft_strlcpy(char *dest, char *str, int size);
char	*ft_strnstr(char *str, char *to_find , size_t len);
char *ft_strrchr(const char *str, int ch);



#endif