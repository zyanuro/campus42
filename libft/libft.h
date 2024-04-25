#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h> // Para size_t
void ft_bzero (void *s, size_t n);
int ft_isalnum (int c);
int ft_isalpha(int c);
int ft_isascii (int c);
int ft_isdigit (int c);
int ft_isprint (int c);
void *ft_memcpy (void *dest, const void *src, size_t n);
void *ft_memmove (void *dst, const void *src, size_t len);
void *ft_memset (void *b, int c, size_t len);
size_t ft_strlen (const char *s);
size_t ft_strlcat (char *dst, const char *src, size_t dstsize);
size_t ft_strlcpy (char *dst, const char *src, size_t dstsize);
#endif